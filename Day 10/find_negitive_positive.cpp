#include<iostream>
using namespace std;

int main() {

    int nums[] = {-10, 12, 0, 7, -5, 13};

    int size = sizeof(nums) / sizeof(nums[0]);

    cout << "Negative values: ";

    for(int i = 0; i < size; i++) {

        if(nums[i] < 0) {
            cout << nums[i] << " ";
        }

    }

    cout << endl;

    cout << "Positive values: ";

    for(int i = 0; i < size; i++) {

        if(nums[i] > 0) {
            cout << nums[i] << " ";
        }

    }

    return 0;
}