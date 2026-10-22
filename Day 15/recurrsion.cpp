#include<iostream>
using namespace std;
void printNu(int n){
    cout<<n<<endl;
    printNu(n+1);
}
int main(){
    int n=1;
    cout<<n<<endl;
    printNu(n);
}