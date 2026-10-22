#include<iostream>
using namespace std;
int main(){
    int nums[]={10,12,8,7,5,13};
    int target = 7;
    int size = sizeof(nums)/sizeof(nums[0]);
    for(int i=0; i<size; i++){
        if(target == nums[i]){
            cout<<i;
        }
        
    }
    
}