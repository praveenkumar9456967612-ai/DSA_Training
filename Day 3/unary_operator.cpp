#include<iostream>
#include<string>
using namespace std;
int main(){
    int a,b;
    a=5;
    cout<<a<<endl;
    a++;//post increment
    cout<<"post increment:- "<<a<<endl;
    ++a;//pre increment
    cout<<"pre increment:- "<<a<<endl;
    b=7;
    cout<<b<<endl;
    b--;//post decrement
    cout<<"post decrement:- "<<b<<endl;
    --b;//pre decrement
    cout<<"pre decrement:- "<<b<<endl;
    return 0;
}