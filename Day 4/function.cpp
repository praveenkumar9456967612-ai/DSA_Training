#include<iostream>
using namespace std;
//function decleration
void display(int n){
    //function defination
    cout<<"number: "<<n<<endl;
}

int main(){
    int num;
    //function calling
    //greet();
    cout<<"Enter the number : ";
    cin>>num;

    display(num);
    return 0;
}