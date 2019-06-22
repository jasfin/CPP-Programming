#include<iostream>

using namespace std;

int main()
{
 int n=6;
 int arr[n]={9,6,4,2,17,6};
 for(int i=0;i<n;i++)
    cout<<arr[i]<<"\t";
 for(int i=1;i<=n;i++)
 {
   //cout<<"\n";
   for(int j=0;j<=n-i;j++)
   {
     cout<<"\n";
     for(int k=j;k<j+i;k++)
           cout<<arr[k]<<"\t";
   }
 }
}
