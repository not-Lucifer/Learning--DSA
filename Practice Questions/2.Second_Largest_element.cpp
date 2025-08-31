#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[10]={1,2,3,4,1,7,7,10,19,2};
    int largest=arr[0];
    int slargest = INT_MIN;
    for (int i = 0; i < 10; i++){
        if (arr[i]>largest){
            slargest = largest;
            largest = arr[i];
        }
        else if(arr[i]<largest && arr[i]>slargest){
            slargest=arr[i];
        }
    }
    cout<< slargest<<endl;
    return 0;
}