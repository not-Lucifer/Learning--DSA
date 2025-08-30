#include<iostream>
#include<map>
using namespace std;

int main(){
    int arr[10]={1,2,3,1,2,1,1,23,34,3};
    map<int,int> mp;
    for (int i = 0; i <10; i++)
    {
       mp[arr[i]]++;
    }
    for(auto it : mp){
        cout<<it.first<<"->"<<it.second<<endl;
    }
    
    
    return 0;
}