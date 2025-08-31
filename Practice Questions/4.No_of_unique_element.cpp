#include<bits/stdc++.h>
using namespace std;
int uniqueelement(int arr[],int n){
    int i = 0;
    for (int j = 1;j<n;j++){
        if (arr[i]!=arr[j]){
            arr[i+1]=arr[j];
            i++;
        }
    }
    return (i+1);
}
int main(){
    int n;
    int a[100];
    cout<<"Enter array size:";
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<uniqueelement(a,n);
    return 0;
}