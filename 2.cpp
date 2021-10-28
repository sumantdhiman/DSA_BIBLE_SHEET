#include <bits/stdc++.h>
using namespace std;

void fun(int arr[],int n){
    int mx=INT_MIN;
    int mn=INT_MAX;

   for(int i=0;i<n;i++){

       if(arr[i]<mn)
       mn=arr[i];

       if(arr[i]>mx)
       mx=arr[i];
   }
   cout<<"MAX "<<mx<<endl;
   cout<<"MIN "<<mn<<endl;
}

int main()
{
   int n;
   cin>>n;
   
   int arr[n];
   
   for(int i=0;i<n;i++)
   cin>>arr[i];
   
   fun(arr,n);
   
   

    return 0;
}
