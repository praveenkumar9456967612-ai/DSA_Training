#include <iostream>
#include <string>
using namespace std;

int countString(string arr[], int n, string query) {
    int count = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] == query) {
            count++;
        }
    }

    return count;
}

int main() {
    string arr[] = {"abs", "dbs", "mu", "abs", "dbs", "mu","cbi"};
    string queries[] = {"abs", "dbs", "mu","cbi"};

    int n = 7;
    int q = 4;

    for (int i = 0; i < q; i++) {
        cout << queries[i] << " = "
             << countString(arr, n, queries[i]) << endl;
    }

    return 0;
}