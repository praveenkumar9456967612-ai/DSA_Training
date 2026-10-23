/*Question 2: Find the Best Pair of Students */
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> scores = {2,7,11,15};
    int target = 9;
    int n = scores.size();

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (scores[i] + scores[j] == target) {
                cout << "[" << i << ", " << j << "]";
                
            }
        }
    }
    return 0;
}
