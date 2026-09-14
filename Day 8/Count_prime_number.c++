#include <iostream>
using namespace std;

int main() {
    int n=20;
    int count = 0;

    for (int i = 2; i <= n; i++) {
        int factors = 0;

        for (int j = 1; j <= i; j++) {
            if (i % j == 0) {
                factors++;
            }
        }

        if (factors == 2) {
            count++;
        }
    }

    cout << "Count of Prime Numbers = " << count;

    return 0;
}