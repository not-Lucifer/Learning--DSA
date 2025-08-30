#include<iostream>
using namespace std;

int main(){
    int arr[5]={5,4,6,1,3};
    for(int i =0;i<4;i++){
        int min = i;
        for(int j =i+1;j<5;j++){
            if (arr[j]<arr[min]){
                min =j;
            }
        }
    int temp = arr[min];
    arr[min]=arr[i];
    arr[i]=temp;
    }
    int k =0;
    while(k<5){
        cout<<arr[k]<<"  ";
        k++;
    }
    return 0;
}