#include<bits/stdc++.h>

using namespace std;

int main()
{
 int n;
 cin>>n;
 vector<int> v(n);
 for(int i=0;i<n;i++)
   cin>>v[i];
 cout<<"\n\n\n";
 for(int k=1;k<=n;k++) 
  for(int i=0;i<n-k+1;i++)
  {
    for(int j=0;j<k;j++)
    {
      if(i+j<n)
        cout<<v[i+j]<<"\t";
    }
    cout<<"\n";
  }

}
    
