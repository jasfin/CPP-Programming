#include<bits/stdc++.h>

using namespace std;

int main()
{
  vector<string> v;
  string str;
  for(int i=0;i<5;i++)
  {
     cin>>str;
     v.push_back(str);
  } 
  cout<<endl;     
  sort(v.begin(),v.end());
  for(int i=0;i<5;i++)
      cout<<v[i]<<endl;
}
