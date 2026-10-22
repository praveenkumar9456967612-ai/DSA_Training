#include <iostream>
using namespace std;

bool areEqual(int arr1[], int arr2[], int n) {
    for (int i = 0; i < n; i++) {
        if (arr1[i] != arr2[i]) {
            return false;
        }
    }
    return true;
}

int main() {
    int arr1[] = {1, 2, 3, 4};
    int arr2[] = {1, 2, 6, 4};
    int n = 4;

    if (areEqual(arr1, arr2, n)) {
        cout << "True: Arrays are equal";
    } else {
        cout << "False: Arrays are not equal";
    }

    return 0;
}