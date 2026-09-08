#include<iostream>
#include<string>
using namespace std;
int main(){
    int i,j,n=5;
    for(i=0; i<=n; i++){
        //spaces
        for(j=0; j<=n-i; j++){
            cout<<" ";
        }
        //print star
     for(j=1; j<=2*i-1; j++){
       cout<<"*";
    }
    cout<<endl;
}
 for(i=0; i<=n; i++){
    //spaces
        for(j=0; j<=i-1; j++){
            cout<<" ";
        }
        //print stars
     for(j=1; j<=2*(n-i)+1; j++){
       cout<<"*";
    }
    cout<<endl;
}
return 0;
}
