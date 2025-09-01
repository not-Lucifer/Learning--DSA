#include<bits/stdc++.h>
using namespace std;
vector<int> shiftingzeros(vector<int> v1,int m){
    int j =-1;
    for (int i = 0; i < m; i++)
    {
        if(v1[i]==0){
            j=i;
            break;
        }
    }
    for(int i =j+1;i<m;i++){
        if (v1[i]!=0){
            swap(v1[i],v1[j]);
            j++;
        }
    }
    return v1;    
}

int main(){
    vector<int> v1;
    int m;
    cin>>m;
    for (int i = 0; i < m; i++)
    {   
        int k;
        cin>>k;
        v1.push_back(k);
    }
    vector<int> vans=shiftingzeros(v1,m);
    for(auto it:vans){
        cout<<it<<" ";
    }        
    return 0;
}