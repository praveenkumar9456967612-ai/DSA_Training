#include <iostream>
#include<array>

using namespace std;
int main(){
    int arr[5] = {4,5,8,2,10};
    int min_value = arr[0];
    for(int i=1; i<sizeof(arr); i++){
        if(arr[i]<min_value){
            min_value=arr[i];
        }
    }
    cout<<min_value;
    return 0;
}