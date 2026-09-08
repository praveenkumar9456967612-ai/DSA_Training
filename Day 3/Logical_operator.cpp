#include<iostream>
#include<string>
using namespace std;
int main(){
    int a,b;

    cout<<"Enter the first value of a: ";
    cin>>a;

    cout<<"Enter the second value of b: ";
    cin>>b;

    cout<<"a>0 && b>0: "<<(a>0 && b>0)<<endl;//logical AND
    cout<<"a>0 || b>0: "<<""<<(a>0 || b>0)<<endl;//logical OR
    cout<<"!(a<b): "<<!(a<b)<<endl;//logical NOT
}