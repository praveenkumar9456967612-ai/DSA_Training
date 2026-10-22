#include<iostream>
using namespace std;
int main(){
    int nums[]={10,12,8,7,5,13};
    int sum = 0;
    int avg = 0;
    int size = sizeof(nums)/sizeof(nums[0]);
    for(int i=0; i<size; i++){
        sum= sum+nums[i];
        avg=sum/size;
        
    }
    cout<<"sum is :"<<sum<<endl;
        cout<<"avg: "<<avg;

}