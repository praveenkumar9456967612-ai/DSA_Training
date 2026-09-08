#include<iostream>
#include<string>
using namespace std;
int main(){
    int a, b;

    cout<<"Enter the first value of a: ";
    cin>>a;

    cout<<"Enter the second value of b: ";
    cin>>b;

    cout<<"Equal to:- "<<(a==b)<<endl;
    cout<<"Not Equal to:- "<<(a!=b)<<endl;
    cout<<"Grether than:- "<<(a>b)<<endl;
    cout<<"Less than"<<(a<b)<<endl;
    cout<<"Grether than equal to:- "<<(a>=b)<<endl;
    cout<<"Less than equal to:- "<<(a<=b)<<endl;
    return 0;
}