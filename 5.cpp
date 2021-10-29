
#include <bits/stdc++.h>
using namespace std;

void fun(int arr[] , int n){
    int i=0;
    int j=n-1;
    
    while(i<j){
        if(arr[i]>0)
        i++;
        
        if(arr[j]<0)
        j--;
        
        if(arr[i]<0 and arr[j]>0 and i<j)
        {
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
    
    } 
     
}
int main()
{
    int n;
    cin>>n;
    
    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    
    fun(arr,n);
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
    
    return 0;
}

