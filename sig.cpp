#include<bits/stdc++.h>
using namespace std;

void buildtree(vector<int> v,vector<int> segtree,int low,int high,int pos)
{
  if(low==high)
  {
    segtree[pos]=v[low];
    return;
  }
  int mid=(low+high)/2;
  buildtree(v,segtree,low,mid,2*pos);
  buildtree(v,segtree,mid+1,high,2*pos+1);
  segtree[pos]=min(segtree[2*pos],segtree[2*pos+1]);
}

int rangemin(vector<int> segtree,int low,int high,int qlow,int qhigh,int pos)
{
  if(low>=qlow && high<=qhigh)
      return segtree[pos];
  if(high<qlow || low>qhigh)
      return INT_MAX;
  
  int mid=(low+high)/2;
  return min(rangemin(segtree,low,mid,qlow,qhigh,2*pos),
             rangemin(segtree,mid+1,high,qlow,qhigh,2*pos+1));
}

void updateseg(vector<int> segtree,int low,int high,int x,int val,int pos)
{
  if(low==high)
  {
    if(low==x)
      segtree[pos]=val;
    return;
  }
  
  if(x<low || x>high)
    return;
  
  int mid=(low+high)/2;
  updateseg(segtree,low,mid,x,val,2*pos);
  updateseg(segtree,mid+1,high,x,val,2*pos+1);
  
}
int main() {

	// Write your code here
  int n,q;
  cin>>n>>q;
  vector<int> v(n+1);
  for(int i=1;i<=n;i++)
    cin>>v[i];
  vector<int> segtree(4*n);
  buildtree(v,segtree,1,n,1);
  cout<<"the tree is"<<endl;
  for(int i=1;i<4*n;i++)
    cout<<segtree[i]<<"\t";
  cout<<endl;
  while(q--)
  {
    char ch;
    int x,y;
    cin>>ch>>x>>y;
    if(ch=='q')
      cout<<rangemin(segtree,1,n,x,y,0)<<endl;
    else
      updateseg(segtree,1,n,x,y,0);
  }
}
