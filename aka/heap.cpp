#include<bits/stdc++.h>

using namespace std;

int main()
{
  int n;
  cin>>n; 
  int arr[n];  
  for(int i=0;i<n;i++)
     cin>>arr[i];
  make_heap(arr,arr+n);
  for(int i=0;i<n;i++)
     cout<<arr[i]<<"\t";
  int ele=pop_heap(arr,arr+n);
  cout<<endl<<ele;
}
