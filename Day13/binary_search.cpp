#include<iostream>
using namespace std;
int main(){
    int arr[]={10,20,30,40,50,60,70};
    int target = 40;
    int size = sizeof(arr) / sizeof(arr[0]);
    int low=0;
    int mid=0;
    int high=size-1;
    while(low <= high){
        int mid = (low+high)/2;
        //comparisons
        if(arr[mid]==target){
            cout<<"index number: "<<mid;
            return 0;
        }
        else if(arr[mid]<target){
            low=mid + 1;
        }else{
            high = mid - 1;
        }
    }
    return 0;
}