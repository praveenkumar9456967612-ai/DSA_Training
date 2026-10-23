/*Question 1: The Missing Seat Number Topic*/
//Time Complexity: O(n)
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> nums = {3, 0, 1};
    int n = nums.size();
    int totalSum = n * (n + 1) / 2;
    int actualSum = 0;
    for (int i = 0; i < n; i++) {
        actualSum += nums[i];
    }
    int missingNumber = totalSum - actualSum;
    cout << missingNumber;
    return 0;
}
