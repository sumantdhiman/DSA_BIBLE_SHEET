#include <bits/stdc++.h>
using namespace std;

void rev(int arr[],int n){
    int l=0;
    int h=n-1;
   
    while(l<h){
        swap(arr[l],arr[h]);
        l++;
        h--;
       
    }
}

int main()
{
   int n;
   cin>>n;
   
   int arr[n];
   
   for(int i=0;i<n;i++)
   cin>>arr[i];
   
   rev(arr,n);
   
   for(int i=0;i<n;i++)
   cout<<arr[i]<<" ";
   

    return 0;
}
