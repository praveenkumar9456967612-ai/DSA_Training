#include<iostream>
using namespace std;
void swap(int &num1, int &num2){
    int value =num2;
    num2 = num1;
    num1 = value;
};

int main(){
    int value=21;
    int second=10;
    //swap value a=b b=a;
    swap(value, second);
    cout<<"value: "<<value<<endl;
    cout<<"second: "<<second<<endl;
};