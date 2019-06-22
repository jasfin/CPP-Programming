#include<bits/stdc++.h>

using namespace std;
int arr[10][10];

vector<int> bfs(int *visited,int n,int item)
{
  queue<int> q;
  q.push(item);
  vector<int> v;
  while(q.empty()!=1)
  {   
     
     int ele=q.front();
     q.pop();
     for(int i=0;i<n;i++)
        if(visited[i]==0 && arr[ele][i]==1)
        {
          q.push(i);
          visited[i]=1;
        }
     visited[ele]=1;
     v.push_back(ele);
  }
  return v;

}

int main()
{
 int n;
 cin>>n;
 int ch=1;
 while(ch==1)
 {
   int a,b;
   cout<<"enter relation elements";
   cin>>a>>b;
   arr[a-1][b-1]=1;
   arr[b-1][a-1]=1;
   cout<<"press 1 to enter more"<<endl;
   cin>>ch;
 }

 int components=0,visited[n]={0};

 for(int i=0;i<n;i++)
   if(visited[i]==0)
   {
     vector<int> v=bfs(visited,n,i);
     
     for(int i=0;i<v.size();i++)
        cout<<v[i]<<"\t";
     cout<<endl;
     components++;
   }

  cout<<"components: "<<components<<endl;

}
