//Question 5: Find the First Repeated Roll Number

#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

int main() {
    vector<int> rollNumbers = {1, 2, 3, 1};
    unordered_set<int> seen;

    for (int i = 0; i < rollNumbers.size(); i++) {
        if (seen.find(rollNumbers[i]) != seen.end()) {
            cout << "true";
            return 0;
        }

        seen.insert(rollNumbers[i]);
    }

    cout << "false";
    return 0;
}
