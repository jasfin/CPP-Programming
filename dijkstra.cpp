//single source shortest path, ie: shortest path from a source to all other nodes..

#include<bits/stdc++.h>

using namespace std;

int minm(int *bv,int *ebt,int n)
{
  int index,val=INT_MAX;
  for(int i=0;i<n;i++)
  {
    if(bv[i]==0)
    {
      if(ebt[i]<val)
      index=i;
      val=ebt[i];
    }
  }
  
  return index;
}



int main()
{
  int n;
  cout<<"enter number of nodes\n";
  cin>>n;
  vector< vector<int> > v(n,vector<int> (n));
  cout<<"enter relationships\n";
  for(int i=0;i<n;i++)
   for(int j=0;j<n;j++)
      cin>>v[i][j];
  
  int bv[n],ebt[n];
  for(int i=0;i<n;i++)
    {
      ebt[i]=220; //INT_MAX
      bv[i]=0;
    }
  //ebt[1]=0;
  //cout<<"int max="<<INT_MAX;
  ebt[0]=0;  
  for(int i=0;i<n-1;i++)  //last vertex needn't be visited as all its neighbours are already visited
  {
    int temp=minm(bv,ebt,n);
    bv[temp]=1; 
    for(int j=0;j<n;j++)
      if(v[temp][j]>0 && ebt[j]>ebt[temp]+v[temp][j])
          ebt[j]=ebt[temp]+v[temp][j];

   cout<<"\n";
   for(int p=0;p<n;p++)
       cout<<ebt[p]<<"\t";
  } 



 
  for(int i=0;i<n;i++)
  {
     cout<<"\n";
     for(int j=0;j<n;j++)
     cout<<v[i][j]<<"\t";
  }


  cout<<"\nebt:\n";
  for(int i=0;i<n;i++)
    cout<<ebt[i]<<"\t";
}
