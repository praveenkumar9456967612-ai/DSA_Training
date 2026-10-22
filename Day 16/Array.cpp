
#include <iostream>
using namespace std;

int main() {
    int arr[] = {4, 4, 1, 2};
    int n = 4;

    int maxNum = arr[0];
    int count = 0;

    for (int i = 1; i < n; i++) {
        if (arr[i] > maxNum) {
            maxNum = arr[i];
        }
    }

    for (int i = 0; i < n; i++) {
        if (arr[i] == maxNum) {
            count++;
        }
    }

    cout << "Maximum number: " << maxNum << endl;
    cout << "Count: " << count;

    return 0;
}
