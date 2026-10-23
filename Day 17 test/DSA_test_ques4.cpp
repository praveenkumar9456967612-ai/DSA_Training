// Find the First Unique Letter

#include <iostream>
#include <string>
using namespace std;

int main() {
    string code = "loveleetcode";
    int freq[26] = {0};
    // Count each character
    for (int i = 0; i < code.length(); i++) {
        freq[code[i] - 'a']++;
    }
    // Find first unique character
    for (int i = 0; i < code.length(); i++) {
        if (freq[code[i] - 'a'] == 1) {
            cout << i;
            return 0;
        }
    }
    cout << -1;
    return 0;
}
