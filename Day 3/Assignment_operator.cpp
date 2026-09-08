#include<iostream>
#include<string>
using namespace std;
int main(){
    int a=10;
    a += 10;//a=a+10
    cout<<"Add: "<<a<<endl;

    int b=20;
    b -= 2;//b=b-2
    cout<<"Sub: "<<b<<endl;

    int c=30;
    c *= 3;//c=c*3
    cout<<"Mul: "<<c<<endl;

    int d=40;
    d /= 4;//d=d/4
    cout<<"Div: "<<d<<endl;

    int m=50;
    m %= 5;//m=m%5
    cout<<"Modulo: "<<m<<endl;
}