#include<bits/stdc++.h>

using namespace std;

int main()
{
  int n;
  cin>>n;
  int space=n-1;
  for(int i=1;i<=n;i++)
  {
    for(int j=0;j<space;j++)
       cout<<" ";
    for(int j=i;j<2*i;j++)
       cout<<j;
    for(int k=2*i-2;k>=i;k--)
       cout<<k;
    cout<<endl;
    space--;
  }
}
