#include <iostream>
using namespace std;
int main() {
    // eligible to vote
     int age;

    cout<<"Enter the age.."<<endl;
    cin>>age;

    if(age>=18){
        cout<<"you can vote"<<endl;
        cout<<"you are a younger"<<endl;
    }else{
        cout<<"you can't vote"<<endl;
        cout<<"you are a child"<<endl;
    }
  
    return 0;
}