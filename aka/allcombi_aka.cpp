#include<bits/stdc++.h>

using namespace std;

int main()
{
 int n;
 cin>>n;
 vector<int> v(n);
 for(int i=0;i<n;i++)
    cin>>v[i];
 for(int k=0;k<=n;k++)
 {
  for(int i=0;i<n;i++)
  {
   for(int j=0;j<k && i+k<=n;j++)
      if(i+j<n)
        cout<<v[i+j]<<"\t";
   cout<<endl;
  }
 }

}
