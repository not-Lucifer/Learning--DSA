#include<bits/stdc++.h>
using namespace std;
int reversesort(int arr[],int low,int high){
    int pivot = low;
    int i = low;
    int j = high;
    while(i<j){
        while (arr[i]>=arr[pivot]&& i <= high)
        {
            i++;
        }
        while(arr[j]<arr[pivot] && j>=low){
            j--;
        }
        if (i<j){
            int temp = arr[i];
            arr[i]= arr[j];
            arr[j] = temp;
        }
    }
    int temp = arr[low];
    arr[low]=arr[j];
    arr[j]=temp;
    return j;
}
int sort(int arr[],int low,int high){
    int pivot=low;
    int i =low;
    int j = high;
    while(i<j){
        while(arr[i]<=arr[pivot] && i<=high){
            i++;
        }
        while(arr[j]>arr[pivot] && j>=low){
            j--;
        }
        if (i<j){
            int temp = arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
    }
    int temp = arr[low];
    arr[low]=arr[j];
    arr[j]=temp;
    return j;
}
void quicksort(int arr[],int low ,int high){
    if (low<high){
        int par=sort(arr,low,high);
        quicksort(arr,low, par-1);
        quicksort(arr,par+1,high);
    }
}
void revqs(int arr[],int low, int high){
    if (low<high){
        int par = reversesort(arr,low,high);
        revqs(arr,low, par-1);
        revqs(arr,par+1,high);
    }
}
int main(){
    int arr[5]={5,4,6,1,3};
    int n = sizeof(arr)/sizeof(int);
    cout<<n<<endl;

    quicksort(arr,0,n-1);

    int k =0;
    while(k<5){
        cout<<arr[k]<<"  ";
        k++;
    }
    revqs(arr,0, n-1);
    cout<<endl;
    int j=0;
    while(j<5){
        cout<<arr[j]<<"  ";
        j++;
    }
    
    return 0;
}