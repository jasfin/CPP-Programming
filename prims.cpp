#include<bits/stdc++.h>
using namespace std;

int findmin(int *weights,bool *visited,int v) //to return the node with min weight that is not yet visited
{
  int minval=INT_MAX,node;
  for(int i=0;i<v;i++)
     if(!visited[i] && weights[i]<minval)
     {
        minval=weights[i];
        node=i;
     } 
 return node;
}

void primsMst(int **matrix,int v)
{
  bool *visited=new bool[v];
  int *parent=new int[v];
  int *weights=new int[v];
 
  for(int i=0;i<v;i++)
  {
    visited[i]=false;
    weights[i]=INT_MAX;
  }
  parent[0]=-1;
  weights[0]=0;

  for(int i=0;i<v;i++)
  {
    int vfound=findmin(weights,visited,v);
    cout<<"vfound number "<<i<<" is "<<vfound<<endl;
    visited[vfound]=true;
    for(int j=0;j<v;j++)
    {
      if(matrix[vfound][j]!=0 && !visited[j])
       if(matrix[vfound][j]<weights[j])
       {
          weights[j]=matrix[vfound][j];
          parent[j]=vfound;
       }
    }
  }
  
  cout<<"\n node:parent \n";
  for(int i=0;i<v;i++)
    cout<<i+1<<":"<<parent[i]+1<<"\n";
}

int main()
{
 int v,e;
 cin>>v>>e;
 int **matrix=new int*[v];
 for(int i=0;i<v;i++)
 {
   matrix[i]=new int[v];
   for(int j=0;j<v;j++)
     matrix[i][j]=0;
 }

 for(int i=0;i<e;i++)
 {
   int a,b,w;
   cin>>a>>b>>w;
   matrix[a-1][b-1]=w;
   matrix[b-1][a-1]=w;
 }

 primsMst(matrix,v);

}
