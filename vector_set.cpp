#include<bits/stdc++.h>

using namespace std;

int main()
{
  vector< set<int> > vs(2);
  vs[0].insert(2);
  int k=vs[0].size();
  for(auto it=vs[0].begin();it!=vs[0].end();it++)
         cout<<*it<<"\t";
}
