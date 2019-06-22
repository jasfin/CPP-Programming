#include<bits/stdc++.h>
using namespace std;
typedef struct edge edge;

struct edge
{
 int start,end,weight;
};

int findparent(int vertex,int *parent)
{
  if(parent[vertex]==vertex)
    return vertex;
  return findparent(parent[vertex],parent);
}

bool issafe(edge e,int *parent)
{
  int p1=findparent(e.start,parent);
  int p2=findparent(e.end,parent);
  return p1!=p2;
}

bool compare(edge e1,edge e2)
{
   return e1.weight < e2.weight;
}
int main()
{
 int v,e;
 cin>>v>>e;
 edge *edges=new edge[e];
 edge *mst=new edge[v-1];
 for(int i=0;i<e;i++)
   cin>>edges[i].start>>edges[i].end>>edges[i].weight;
 
 sort(edges,edges+e,compare);
 int *parent=new int[v];
 for(int i=0;i<v;i++)
    parent[i]=i;
 
 int count=0,i=0;
 while(count<v-1)
 {
   if(issafe(edges[i],parent))
   {
     mst[count++]=edges[i];
     parent[edges[i].end]=edges[i].start;
   }
   i++;
 }

 cout<<"\n start:end-weight\n";
 for(int i=0;i<v-1;i++)
   cout<<mst[i].start<<":"<<mst[i].end<<"-"<<mst[i].weight<<endl;
}
