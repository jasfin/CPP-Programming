#include<bits/stdc++.h>

using namespace std;

int main()
{
  int n,a,b,weight;
  cout<<"enter no. of nodes";
  cin>>n;

  int w[n][n][n+1];
  for(int i=0;i<n;i++)
   for(int j=0;j<n;j++)
     w[i][j][0]=300;

  int ch=0;
  do
  {
    cout<<"\n enter connection node numbers";
    cin>>a>>b;
    cout<<"\n enter weight";
    cin>>weight;
    w[a-1][b-1][0]=weight;
    w[b-1][a-1][0]=weight;
    cout<<"\n enter 0 to continue";
    cin>>ch;
  }while(ch==0);

  cout<<"\n initial conditions";
  for(int i=0;i<n;i++)
  {
     cout<<"\n";
     for(int j=0;j<n;j++)
        cout<<w[i][j][0]<<"\t";
  }

  for(int k=1;k<=n;k++)
    for(int i=0;i<n;i++)
      for(int j=0;j<n;j++)
         w[i][j][k]=min(w[i][j][k-1],w[i][k-1][k-1]+w[k-1][j][k-1]);

  for(int i=0;i<n;i++)
    for(int j=0;j<n;j++)
     if(i==j)
       w[i][j][n]=300;
    
  cout<<"\n final conditions";
  for(int i=0;i<n;i++)
  {
     cout<<"\n";
     for(int j=0;j<n;j++)
        cout<<w[i][j][n]<<"\t";
  }
}
