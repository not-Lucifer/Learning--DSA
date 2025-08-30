#include<iostream>
using namespace std;

int main(){
    int arr[5]={5,4,6,1,3};
    for(int i=4;i>0;i--){
        int swap_check=0;
        for(int j=0;j<i;j++){
            if ( arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j]= arr[j+1];
                arr[j+1]=temp;
                swap_check=1;
            }
        }
        if(swap_check==0){
            break;
        }
    }
    int k =0;
    while(k<5){
        cout<<arr[k]<<"  ";
        k++;
    }
    return 0;
}