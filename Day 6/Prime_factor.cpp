#include<iostream>
using namespace std;
int main(){
    int n = 81;
    int temp = n;
    int fac = 0;

    for(int i=2; i*i<n; i++){
        while(n % i == 0){
            cout<<i<<endl;
            n = n / i;
        }
    }
    if(n>1)
    cout<<"n"<<endl;
    // cout<<"Not Prime number: "<<endl;
    // else
    // cout<<"Prime number: "<<endl;
    

}