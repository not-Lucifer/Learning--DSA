#include<iostream>
using namespace std;

int main(){
    int arr[5]={1,2,3,4,5};
    for(int i = 1 ; i <5;i++){
        if(arr[i]>=arr[i-1]){}
        else cout <<"Not sorted";
    }
    cout<<"sorted";
    return 0;
}