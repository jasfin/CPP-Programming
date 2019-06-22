#include<bits/stdc++.h>

using namespace std;

int main()
{
  int n,a,b;
  cout<<"enter number of elements in the graph";
  cin>>n;
  
  int arr[n][n];
  for(int i=0;i<n;i++)
    for(int j=0;j<n;j++)
       arr[i][j]=0;
  
  int ch=1;
  while(ch==1)
  {
    cout<<"enter relationship elements";
    cin>>a>>b;
    arr[a-1][b-1]=1;
    arr[b-1][a-1]=1;
    cout<<"press 1 to continue";
    cin>>ch;
  }

  for(int i=0;i<n;i++)
   { 
      cout<<"\n";
      for(int j=0;j<n;j++)
        cout<<arr[i][j]<<"\t";
   }
 
  int item,visited[n+1]={0},level[n+1],parent[n+1];
  parent[1]=-1;
  level[1]=0;
  queue<int> q;
  q.push(1);
  while(q.empty()!=1)
  {
   item=q.front();
   q.pop();
   for(int i=0;i<n;i++)
     if(arr[item-1][i]==1 && visited[i+1]==0)
       {
         q.push(i+1);
         parent[i+1]=item;
         level[i+1]=level[item]+1;
       }
   cout<<item<<"  ";
   visited[item]=1;
  }
  cout<<"\n\n";

  cout<<"level array :";
  for(int i=1;i<=n;i++)
     cout<<level[i]<<" ";

  cout<<"\n\n";
  
  cout<<"parent array";
  for(int i=1;i<=n;i++)
     cout<<parent[i]<<" ";
  cout<<"enter indices to find the path in between"<<endl;
  int u,v;
  cin>>u>>v;
  int k=v;
  vector<int> path;
  while(k!=u)
  {
    path.push_back(k);
    k=parent[k];
  }
  path.push_back(u);
  cout<<"the path is"<<endl;
  k=path.size()-1;
  while(k>=0)
    cout<<path[k--]<<"\t";
  //cout<<u<<"\t";
  cout<<"\n\n";
}
