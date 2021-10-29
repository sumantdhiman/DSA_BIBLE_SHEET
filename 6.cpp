#include<bits/stdc++.h>
#include<map>
using namespace std;


int main(){
    int n;
    cin>>n;
    
    int arr[n],brr[n];
    
    for(int i=0;i<n;i++)
    cin>>arr[i];
    
    for(int i=0;i<n;i++)
    cin>>brr[i];
    
     
    map<int,int>my_map;
    
    for(int i=0;i<n;i++)
    { my_map[arr[i]]++;
      my_map[brr[i]]++;
    }
    
    for(auto i :my_map){
        cout<<i.first<<" ";
    }
    cout<<endl;
    
    for(auto i :my_map){
        if(i.second>1)
        cout<<i.first<<" ";
    }
    
    return 0;
}
