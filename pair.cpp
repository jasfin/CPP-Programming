#include<bits/stdc++.h>

using namespace std;

int main()
{
 pair<int,int> p;
 vector< pair<int,int> > v;
 int n;
 cin>>n;
 while(n)
 {
   cout<<"enter the pair" <<endl;
   cin>>p.first>>p.second;
   v.push_back(p);
   n--;
 }
  sort(v.begin(),v.end());
 for(int i=0;i<v.size();i++)
    cout<<v[i].first<<":"<<v[i].second<<endl;
}
