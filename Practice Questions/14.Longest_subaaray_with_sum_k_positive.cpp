#include<bits/stdc++.h>
using namespace std;

int longestsubarray(vector<int> a , int k){
    int left = 0 , right =0;
    long long sum = a[0];
    int maxlen = 0;
    int n = a.size();
    while(right<n){
        while (left <=right && sum>k){
            sum-=a[left];
            left++;
        }
        if (sum ==k){
            maxlen = max(maxlen,right-left+1);
        }
        right++;
        if (right<n) sum += a[right];
    }
    return maxlen;
}

int main(){
    vector<int> a={1,2,3,1,1,1,1,4,2,3};
    int k;
    cin>>k;
    int answer = longestsubarray(a,k);
    cout<<answer<<endl;

    return 0;
}