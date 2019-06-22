#include<bits/stdc++.h>
using namespace std;

int main()
{
 int n;
 cin>>n;
 int arr[n];
 for(int i=0;i<n;i++)
   cin>>arr[i];
 make_heap(arr,arr+n,greater<int>());
 cout<<endl;
 for(int i=0;i<n;i++)
   cout<<arr[i]<<"\t";
 cout<<endl;
 sort_heap(arr,arr+n+1);
 for(int i=0;i<n;i++)
   cout<<arr[i]<<"\t";
}
