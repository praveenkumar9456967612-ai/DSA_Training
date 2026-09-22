#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    while (n > 1 && n % 3 == 0) {
        n = n / 3;
    }

    if (n == 1)
        cout << "Power of 3";
    else
        cout << "Not a power of 3";

    return 0;
}