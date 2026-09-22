#include<iostream>
using namespace std;
int main(){
    //three pointer sort
    int arr[]={0,2,1,1,2,0,1};
    int size = sizeof(arr) / sizeof(arr[0]);
    int low=0;
    int mid=0;
    int high=size-1;
    while(mid <= high){
        if(arr[mid] == 0){
            swap(arr[low],arr[mid]);
             low++;
             mid++;
        }
         else if (arr[mid] == 1){
            mid++;
          } 
        else {
            swap(arr[mid] , arr[high]);
            high--;
        }
    }
     for(int k=0; k<size; k++){
        cout<<arr[k]<<" ";
     }
    return 0;    
}