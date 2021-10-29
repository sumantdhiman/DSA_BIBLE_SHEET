/*
This is a brute force solution in O(Nk) time
write a function to calculate the max element in the array and then do this K time
*/

#include <bits/stdc++.h>
using namespace std;

int kmaxelement(int arr[],int n,int k){
    
    int m,temp=INT_MAX;
    
    while(k--){
    m=INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]>m and arr[i]<temp)
        m=arr[i];
    }
      temp=m;
     
    }
    
    return m;
}


int main()
{
    int n;
    cin>>n;
    
    int arr[n];
    
    for(int i=0;i<n;i++)
    cin>>arr[i];
    
    int k;
    cin>>k;
    
    cout<<kmaxelement(arr,n,k)<<endl;
    return 0;
}
