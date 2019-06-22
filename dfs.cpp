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

  int visited[n+1]={0};
  stack<int> s;
  s.push(1);
  
  cout<<"\n"; 
  int item; 
  while(s.empty()!=1)
  {
   item=s.top();
   visited[item]=1;
   s.pop();
   for(int i=0;i<n;i++)
     if(arr[item-1][i]==1 && visited[i+1]==0)
        s.push(i+1);

   cout<<item<<"  ";
  }

   cout<<"\n\n";
}
   
