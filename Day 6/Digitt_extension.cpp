#include<iostream>
using namespace std;
//value of print for reverse form
int main(){
    int n=1567;
    int count = 0;
    while(n>0){
        int digit = n % 10;
        cout<<digit<<endl;
        n = n/10;
    }
    return n;
}