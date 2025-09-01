#include<bits/stdc++.h>
using namespace std;
vector<int> unionarr(vector<int>& v1, vector<int>& v2){
    int i =0;
    int j =0;
    int s1 = v1.size();
    int s2= v2.size();
    vector<int> unionarr1;
    while (i<s1 && j<s2)
    {
        if(v1[i]<=v2[j]){
            if(unionarr1.empty()||unionarr1.back()!= v1[i]){
                unionarr1.push_back(v1[i]);
            }
            if(v1[i]==v2[j]){
                j++;
            }
            i++;
        }
        else{
            if(unionarr1.empty()||unionarr1.back()!= v2[j]){
                unionarr1.push_back(v2[j]);
            }
            j++;
        }
    }
    while (i<s1)
    {
        if(unionarr1.empty()||unionarr1.back()!= v1[i]){
            unionarr1.push_back(v1[i]);
        }
        i++;
    }
    while (j<s2)
    {
        if(unionarr1.empty()||unionarr1.back()!= v2[j]){
            unionarr1.push_back(v2[j]);
        }
        j++;
    }            

    return unionarr1;
    
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
    vector<int> answer = unionarr(v1,v2);
    for( auto it:answer){
        cout<<it<<" ";
    }
    cout<<endl;
    return 0;
}