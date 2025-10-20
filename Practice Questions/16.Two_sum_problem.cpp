#include<bits/stdc++.h>
using namespace std;
void twosum(vector<int> arr,int target){
    sort(arr.begin(),arr.end());
    int left = 0 , right = arr.size()-1;
    while(left<right){
        if (arr[left]+arr[right]<target){
            left++;
        }
        else if(arr[left]+arr[right]>target){
            right--;
        }
        else if(arr[left]+arr[right]==target){
            cout<<"Yes" ;
            return;
        }
    }
    cout<<"No";
}

int main(){
    vector<int> arr={2,6,5,8,11};
    int target;
    cin>>target;
    twosum(arr,target);
    return 0;
}