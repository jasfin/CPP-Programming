#include<bits/stdc++.h>

using namespace std;

int main()
{
  int n;
  map<int,int> m;
  for(int i=0;i<3;i++)
  {
     cin>>n;
     for(int j=0;j<n;j++)
     {
       int item;
       cin>>item;
       if(m[item]!=i+1)
          m[item]++;
     }
   }
   int count=0;
   for(auto it=m.begin();it!=m.end();it++)
      if(it->second==3)
        count++;
   cout<<count;
}
