//dijkstra's algo using priority queue in nlogn;
#include<bits/stdc++.h>
using namespace std;

int main()
{
 cout<<"enter n and e"<<endl;
 int n;
 cin>>n; 
 vector< pair<int,int> >graph[n];
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
 pair<int,int> p;
 p.first=0; //ebt
 p.second=0; //index

 priority_queue< pair<int,int>, vector< pair<int,int> >, greater< pair<int,int> > > pq;
 pq.push(p);

 while(pq.empty()!=1)
 {
   int u=pq.top().second;
   pq.pop();
   for(int i=0;i<graph[u].size();i++)
   {
     int v=graph[u][i].first;
     if(ebt[v]>ebt[u]+graph[u][i].second)
     {
       ebt[v]=ebt[u]+graph[u][i].second;
       pq.push(make_pair(ebt[v],v));
     }
   }
 }
 for(int i=0;i<n;i++)
   cout<<ebt[i]<<"\t";
}



