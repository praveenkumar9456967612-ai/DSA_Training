
#include <iostream>
#include <string>

using namespace std;

int main() {
    string email;
    int upper = 0, lower = 0, digit = 0, special = 0;

    cout << "Enter your email: ";
    getline(cin, email);

    for (int i = 0; i < email.length(); i++) {
        if (isupper(email[i])) {
            upper++;
        }
        else if (islower(email[i])) {
            lower++;
        }
        else if (isdigit(email[i])) {
            digit++;
        }
        else {
            special++;
        }
    }

    cout << "Uppercase: " << upper << endl;
    cout << "Lowercase: " << lower << endl;
    cout << "Digits: " << digit << endl;
    cout << "Special characters: " << special << endl;

    return 0;
}
