#include<bits/stdc++.h>
using namespace std;
int missing(vector<int> v1,int N){
    int n = N-1;
    int xor1=0,xor2 =0;
    for(int i =0;i<n;i++){
        xor2=xor2^v1[i];
        xor1=xor1^(i+1);
    }
    xor1=xor1^N;
    return xor1^xor2;

}
int main(){
    vector<int> v1;
    int N;
    cin>>N;
    for(int i = 0;i<N;i++){
        int k;
        cin>>k;
        v1.push_back(k);
    }
    int ans = missing(v1,N);
    cout<<ans;
    return 0;
}