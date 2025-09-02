#include<bits/stdc++.h>
using namespace std;
int consecutiveones(vector<int> v1){
    int cnt =0,maxi =0;
    for(int i=0;i<v1.size();i++){
        if(v1[i]==1){
            cnt++;
            maxi=max(maxi,cnt);
        }
        else{
            cnt=0;
        }
    }
    return maxi;
}
int main(){
    vector<int> v1;
    int n;
    cin>>n;
    for(int i =0 ;i <n;i++){
        int k;
        cin>>k;
        v1.push_back(k);
    }
    int ans = consecutiveones(v1);
    cout<<ans;
    return 0;
}