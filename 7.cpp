#include <bits/stdc++.h>
using namespace std;

void rot(int arr[],int n){
    int temp=arr[n-1];

   for(int i=n-1;i>0;i--)
   arr[i]=arr[i-1];

   arr[0]=temp;
   
   
}

int main()
{
   int n;
   cin>>n;
   
   int arr[n];
   
   for(int i=0;i<n;i++)
   cin>>arr[i];
   
   rot(arr,n);

   for(int i=0;i<n;i++)
   cout<<arr[i]<<" ";


    return 0;
}
