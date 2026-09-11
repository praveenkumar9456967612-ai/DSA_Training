#include<iostream>
using namespace std;
//Palindrome number
int main(){
    int n=121;
    int temp = n;
    int rev = 0;

    while(n>0){
        int dig = n % 10;
        rev = rev * 10 + dig;
        n = n / 10;
        cout<<rev<<endl;
    }
    if(temp == rev)
        cout<<"Palindrome number: " ;
        else
        cout<<"Not palindrome number: ";
    
    return 0;
}