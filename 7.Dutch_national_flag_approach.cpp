#include<bits/stdc++.h>
using namespace std;
 vector<int> dutchalgo(vector<int> arr){
    int low =0,mid =0,high = arr.size()-1;
    while (mid<=high)
    {
        if (arr[mid]==0){
            swap(arr[low],arr[mid]);
            low++;
            mid++;
        }
        else if (arr[mid]==1) mid++;
        else {
            swap(arr[high],arr[mid]);
            high--;
        }
    }
    return arr;
    
 }

int main(){
    vector<int> arr = {0,1,2,1,1,1,0,0,2,2,1,2,0,1,0};
    arr = dutchalgo(arr);
    for(auto it:arr){
        cout<<it<<" ";
    }

    return 0;
}