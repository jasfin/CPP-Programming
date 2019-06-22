#include<bits/stdc++.h>

using namespace std;

int main()
{
  int n;
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++)
     cin>>arr[i];
  
  int s=0,e=0;
  for(int i=0;i<n;i++)
  {
    int st=i,se=i;
    while(1)
     if(arr[i+1]>arr[i] && i+1<n)
      {
        i++;
        se=i;
      }
     else
        break;
    
     if(se-st>e-s)
     {
        e=se;
        s=st;
     }
   }
  
   for(int i=s;i<=e;i++)
       cout<<arr[i]<<"\t";
}
