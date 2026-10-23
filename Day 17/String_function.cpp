#include<iostream>
#include<string>
using namespace std;
void printstring(string name){
    cout<<"enter a name:- "<<name;
    cin>>name;

}
int main(){
    string name;
    printstring(name);
}