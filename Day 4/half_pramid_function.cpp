#include<iostream>
#include<string>
using namespace std;
void half_pramid_function(int n)
{
    for(int i=0; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    for(int i=0; i<=n; i++){
        for(int j=0; j<=n-i; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}
int main()
{
    int n;

    cout<<"Enter number of the rows: ";
    cin>>n;
    cout<<"Enter number of the rows: ";
    cin>>n;

    half_pramid_function(n);
}