#include<iostream>
using namespace std;
//Armstrong number
int main(){
    int n = 153;
    int temp = n;
    int rem = 0;

    while(n > 0){
        int dig = n % 10;
        rem = rem + dig * dig * dig;
        n = n / 10;

    } 
    if(rem == temp)
    cout<<"Armstrong number: "<<endl;
    else
    cout<<"Not Armstrong number: "<<endl;

}