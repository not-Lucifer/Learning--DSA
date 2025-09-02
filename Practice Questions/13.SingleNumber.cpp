#include<bits/stdc++.h>
using namespace std;
int single(vector<int> v){
    int xor1 =0;
    for (int i =0 ;i < v.size();i++){
        xor1=xor1^v[i];
    }
    return xor1;
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
    int answer = single(v1);
    cout<<answer;  
    return 0;
}