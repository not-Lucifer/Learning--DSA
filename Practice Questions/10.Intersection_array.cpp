#include<bits/stdc++.h>
using namespace std;
vector<int> intersecarr(vector<int> v1, vector<int> v2,int m,int n){
    int i =0 ;
    int j =0;
    vector<int> ans;
    while(i<m && j<n){
        if (v1[i]<v2[j]){
            i++;
        }
        else if( v1[i]>v2[j]){
            j++;
        }
        else{
            ans.push_back(v1[i]);
            i++;
            j++;
        }
    }
    return ans;
}

int main(){
     vector<int> v1,v2;
    int n1,n2;
    cin>>n1;
    for(int i=0;i<n1;i++){
        int k;
        cin>>k;
        v1.push_back(k);
    }
    cin >> n2;
    for(int i=0;i<n2;i++){
        int k;
        cin>>k;
        v2.push_back(k);
    }
    vector<int> answer =intersecarr(v1,v2,n1,n2);
    for( auto it:answer){
        cout<<it<<" ";
    }
    cout<<endl;
    return 0;
}