#include <iostream>
using namespace std;

int cutRod(int lenofrod, int minlength, int arr[], int n) {
    int cuts = 0;

    for (int i = 0; i < n; i++) {
        if (lenofrod >= minlength) {
            lenofrod -= arr[i];
            cuts++;
        }
    }

    cout << "Remaining rod length: " << lenofrod << endl;
    return cuts;
}

int main() {
    int lenofrod = 10;
    int minlength = 3;
    int arr[] = {4, 3, 3, 2};
    int n = 4;

    int cuts = cutRod(lenofrod, minlength, arr, n);

    cout << "Total cuts: " << cuts << endl;

    return 0;
}