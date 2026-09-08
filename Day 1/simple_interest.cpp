#include<iostream>
#include<string>
using namespace std;
int main(){
    float p,r,t;
    float s;
    cout<<"Enter the value of principle"<<endl;
    cin>>p;
    cout<<"Enter the value of rate"<<endl;
    cin>>r;
    cout<<"Enter the value of time"<<endl;
    cin>>t;
    s=(p*r*t)/100;
    cout<<s;
    return 0;
}