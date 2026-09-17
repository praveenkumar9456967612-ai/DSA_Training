#include<iostream>
#include <vector>
#include <utility>
using namespace std;
int main(){
    vector <int> arr ={-10,12,0,7,-5,13};
    int l = 0;//left
    int r = arr.size() -1;
    while(l <= r){
        swap(arr[l], arr[r]);
        l++;
        r--;
    }
    for(int i=0; i<arr.size(); i++){
        cout<< arr[i];
    }

}