#include<iostream>
#include<vector>
using namespace std;
int main(){
    int arr[]={8,6,7,9,2};
    int size = sizeof(arr) / sizeof(arr[0]);
    int max=arr[0];
    int prev=0;
    for(int i=1; i<size; i++){
         if(max<arr[i]){
            prev=max;
            max=arr[i];
         }     
    }
     cout<<prev;
    return 0;

}