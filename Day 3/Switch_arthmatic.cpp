#include<iostream>
#include<string>
using namespace std;
int main(){
    int a, b,num,choice;
    cout<<"Enter the value of a: "<<endl;
    cin>>a;
    cout<<"Enetr the value of b: "<<endl;
    cin>>b;
    cout<<"Enter the choice"<<endl;
    cin>>choice;
    switch(choice){
        case 1:
        {//addiition
            cout<<"Sum of Number is: "<<a+b<<endl;
            break;
        }
        case 2:
        {//subtraction
            cout<<"Sum of Number is: "<<a-b<<endl;
            break;
            }
        case 3:
        {//multipication
            cout<<"Sum of Number is: "<<a*b<<endl;
            break;
            }
        case 4:
        {//division
            cout<<"Sum of Number is: "<<a/b<<endl;
            break;
            }
        case 5:{//modulo
             cout<<"Sum of Number is: "<<a%b<<endl;
             break;
            }
            default:{
                cout<<"Enter a valid choice";
            }
    }
    return 0;
}