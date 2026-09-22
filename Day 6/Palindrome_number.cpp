#include<iostream>
using namespace std;
//Palindrome number
int main(){
    int n=128;
    int temp = n;
    int rev = 0;

    while(temp>0){
        int dig = temp % 10;
        rev = rev * 10 + dig;
        temp = temp / 10;
        
    }
    if(n == rev){
        cout<<"Palindrome number: "<<n ;
    }
        else{
        cout<<"Not palindrome number: "<< n;
        }
    
    return 0;
}