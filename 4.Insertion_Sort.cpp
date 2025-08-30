#include<iostream>
using namespace std;

int main(){
    int arr[5]={5,4,6,1,3};
    for (int i = 0; i < 5; i++)
    {
        int j=i;
        while(j>0 && arr[j-1]>arr[j]){
            int temp = arr[j];
            arr[j]=arr[j-1];
            arr[j-1]=temp;
            j--;
        }
    }
    

    int k =0;
    while(k<5){
        cout<<arr[k]<<"  ";
        k++;
    }
    return 0;
}