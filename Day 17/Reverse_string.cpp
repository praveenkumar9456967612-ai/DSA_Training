
#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;

    cout << "Enter a string: ";
    getline(cin, s);

    int i = 0;
    int j = s.length() - 1;

    while (i < j) {
        swap(s[i], s[j]);
        i++;
        j--;
    }

    cout << "Reverse string: " << s;

    return 0;
}
