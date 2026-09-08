#include<iostream>
#include<string>
using namespace std;
//parameter & no return
void greet(string name){
    cout<<"name"<<name<<endl;
}
//no parameter & no return
void message(){
    cout<<"with out parameter and no return type"<<endl;
};
//no parameter & return
int fn(){
    int num=10;
    return num;
};
//parameter with return
int func(int num){
    if(num){
        return 1;
    }else{
        return 0;
    }
};

int main(){
    greet("praveen");
    message();
    cout<<fn()<<endl;
    cout<<func(10)<<endl;

    return 0;
}