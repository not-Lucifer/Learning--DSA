#include<bits/stdc++.h>
using namespace std;
void shift(int arr[],int n,int d){
    d=d%n;
    reverse(arr,arr+d);
    reverse(arr+d,arr+n);
    reverse(arr,arr+n);
}

int main(){
    int arr[5]={1,2,3,4,5};
    shift(arr,5,2);
    for (int i = 0; i < 5; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}