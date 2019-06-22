#include<bits/stdc++.h>

using namespace std;
int arr[10][10];
vector<int> bfs(int n,int *visited,int item)
{
  //cout<<arr[0][0];
  queue<int> q;
  q.push(item);
  vector<int> v;
  while(q.empty()!=1)
  {
    item=q.front();
    q.pop();
    for(int i=0;i<n;i++)
      if(visited[i]==0 && arr[item][i]==1)
       {
         q.push(i);
         visited[i]=1;
       }
    v.push_back(item);
    visited[item]=1;
  }
 
  return v;
}


int main()
{
  int n;
  cout<<"enter number of elements in the graph"<<endl;
  cin>>n;

  //int arr[n][n];
  for(int i=0;i<n;i++)
    for(int j=0;j<n;j++)
        arr[i][j]=0;

  int ch=1,a,b;
  while(ch==1)
  {
    cout<<"enter relation elements"<<endl;
    cin>>a>>b;
    arr[a-1][b-1]=1;
    arr[b-1][a-1]=1;
    cout<<"press 1 to enter more"<<endl;
    cin>>ch;
  }

  cout<<endl<<"adjacency matrix is: "<<endl;
  for(int i=0;i<n;i++)
  {
    for(int j=0;j<n;j++)
       cout<<arr[i][j]<<"\t";
    cout<<endl;
  }

  int visited[n]={0},components=0;
/*  cout<<"initial visited array"<<endl;
  for(int i=0;i<n;i++)
       cout<<visited[i]<<"\t";
*/
  cout<<endl;
  for(int i=0;i<n;i++)
    if(visited[i]==0)
     {
       components++;
       vector<int> v=bfs(n,visited,i);
       cout<<"component "<<components<<" : "<<endl;
       for(int j=0;j<v.size();j++)
         cout<<v[j]+1<<"\t";
       cout<<endl;
     }
}
