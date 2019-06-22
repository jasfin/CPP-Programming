#include<bits/stdc++.h>
using namespace std;

bool func(const pair<int,int> &p1,const pair<int,int> &p2)
{
  if(p1.first<p2.first)
     return false;  //strange behavior
  return true;
}

int main()
{
 pair<int,int> p;
 int n;
 cout<<"enter n and e"<<endl;
 cin>>n;
 vector< pair<int,int> > graph[n];
 int e;
 cin>>e;
 cout<<"enter a,b,w"<<endl;
 while(e--)
 {
  int a,b,w;
  cin>>a>>b>>w;
  graph[a].push_back(make_pair(b,w));
  graph[b].push_back(make_pair(a,w));
 }

 int ebt[n];
 for(int i=1;i<n;i++)
    ebt[i]=INT_MAX;
 ebt[0]=0;

 vector< pair<int,int> > v; //heap of type (ebt,index)
 v.push_back( make_pair(0,0) );
 make_heap(v.begin(),v.end());
 
 while(v.size()!=0)
 {
   int u=v[0].second;
   pop_heap(v.begin(),v.end(),func);
   v.pop_back();
   for(int i=0;i<graph[u].size();i++)
   {
     int vi=graph[u][i].first;
     if(ebt[vi]>ebt[u]+graph[u][i].second)
     {
        ebt[vi]=ebt[u]+graph[u][i].second;
        v.push_back(make_pair(ebt[vi],vi));
        push_heap(v.begin(),v.end(),func);
     }
   }
 }

 for(int i=0;i<n;i++)
   cout<<ebt[i]<<"\t";
 
}
