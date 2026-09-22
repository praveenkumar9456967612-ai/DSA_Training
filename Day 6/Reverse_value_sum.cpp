#include<iostream>
using namespace std;
//sum of reverse value
int main(){
    int n = 1386;
    int sum = 0;
    while(n>0){
        int dig = n % 10;
        sum = sum + dig;
        n = n/10;
    }
    cout<<"sum of digit:- "<<sum;
}