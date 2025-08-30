#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[6]={1,3,2,4,5,8};
    int max =arr[0];
    for (int i = 0; i <6; i++)
    {
        if(arr[i]>max){
            max =arr[i];
        }
    }
    cout<<max;
    
    
    return 0;
}