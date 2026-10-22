#include<iostream>
using namespace std;
void Num(int n){
    if(n==0)
    return;
    cout<<n<<endl;
    Num(n-1);
}
int main(){
    int n=10;
    //cout<<n<<endl;
    Num(n);
}