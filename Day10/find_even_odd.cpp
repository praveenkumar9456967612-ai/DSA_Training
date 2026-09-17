#include<iostream>
using namespace std;
int main(){
    int nums[]={10,12,8,7,5,13};
    int even = 0;
    int odd = 0;
    int size = sizeof(nums)/sizeof(nums[0]);
    for(int i=0; i<size; i++){
        if(nums[i]%2==0){
            even++;
        }else{
            odd++;
        }
    }
    cout<<"even: "<<even<<endl;
    cout<<"odd: "<<odd;
}