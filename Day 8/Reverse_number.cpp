#include <iostream>
using namespace std;

int main() {
    int x = 123;
    int ans = 0;

    while (x != 0) {
        int rem = x % 10;

        ans = ans * 10 + rem;
        x = x / 10;
    }

    cout << "Reverse = " << ans;

    return 0;
}