#include<bits/stdc++.h>

using namespace std;

int main()
{
  pair< float, pair<int,int> > p;
  vector< pair< float,pair<int,int> > > v;
  
  p.first=2.2;
  p.second.first=1;
  p.second.second=2;
  v.push_back(p);
  p.first=1.3;
  p.second.first=3;
  p.second.second=4;
  v.push_back(p);

  sort(v.begin(),v.end());
  for(int i=0;i<v.size();i++)
  {
     cout<<"pair"<<i+1<<" is :"<<endl;
     cout<<v[i].first<<":"<<v[i].second.first<<":"<<v[i].second.second;
     cout<<endl;
  }
}     
