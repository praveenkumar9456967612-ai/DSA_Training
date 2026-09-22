#include<iostream>
using namespace std;
int main(){
    //two pointer sort
    int arr[]={0,1,1,0,1,0,1,1};
    int size = sizeof(arr) / sizeof(arr[0]);
    int i=0;
    int j=7;
    while(j>i){
        if(arr[i] == 0){
             i++;
        }
          else if (arr[j] == 1){
            j--;
          } 
        else if(arr[i]==1 && arr[j]==0){
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
    }
    for(int k=0; k<size; k++){
        cout<<arr[k]<<" ";
    }
    return 0;    
}