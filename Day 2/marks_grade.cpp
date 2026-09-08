// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {

    int marks;

    cout<<"Enter the marks.."<<endl;
    cin>>marks;

    if(marks>90&&marks<=100){
        cout<<"Grade A+";
    }else if(marks>80&&marks<=90){
        cout<<"Grade A";
    }else if(marks>70&&marks<=80){
        cout<<"Grade B+";
    }else if(marks>60&&marks<=70){
        cout<<"Grade B";
    }else if(marks>50&&marks<=60){
        cout<<"Grade C";
    }
    return 0;
}