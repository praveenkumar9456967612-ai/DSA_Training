
#include <iostream>
#include <iomanip>
#include <ctime>
#include <thread>
#include <chrono>
using namespace std;

int main() {
    int choice;

    cout << "1. 12-Hour Watch" << endl;
    cout << "2. 24-Hour Watch" << endl;
    cout << "Enter your choice: ";
    cin >> choice;

    if (choice != 1 && choice != 2) {
        cout << "Invalid choice!";
        return 0;
    }

    while (true) {
        time_t now = time(nullptr);
        tm *t = localtime(&now);

        int hour = t->tm_hour;
        int minute = t->tm_min;
        int second = t->tm_sec;

        if (choice == 1) {
            string period = (hour >= 12) ? "PM" : "AM";

            hour = hour % 12;
            if (hour == 0) {
                hour = 12;
            }

            cout << "\r"
                 << setfill('0') << setw(2) << hour << ":"
                 << setw(2) << minute << ":"
                 << setw(2) << second << " " << period
                 << flush;
        }
        else {
            cout << "\r"
                 << setfill('0') << setw(2) << hour << ":"
                 << setw(2) << minute << ":"
                 << setw(2) << second
                 << flush;
        }

        this_thread::sleep_for(chrono::seconds(1));
    }

    return 0;
}
