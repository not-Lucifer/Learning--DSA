#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v1;
    int size;
    cin>>size;
    for(int i =0;i<size;i++){
        int k ;
        cin>>k;
        v1.push_back(k);
    }
    int num;
    cin>>num;
    int index=0;
    for(auto it:v1){
        if(it == num){
            cout<<index;
            break;
        }
        index++;
    }
    return 0;
}