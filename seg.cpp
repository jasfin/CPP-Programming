#include<bits/stdc++.h>

using namespace std;

void construct(int *arr,int *seg,int l,int r,int pos)
{
  if(l==r)
  {
    seg[pos]=arr[l];
    return ;
  }
  int mid=(l+r)/2;
  construct(arr,seg,l,mid,2*pos+1);
  construct(arr,seg,mid+1,r,2*pos+2);
  seg[pos]=seg[2*pos+1]+seg[2*pos+2];
}

int findsum(int *seg,int qlow,int qhigh,int low,int high,int pos)
{
  if(qlow>high || qhigh<low)
     return -1;
  if(low>=qlow && high<=qhigh)
     return seg[pos];

  int mid=(low+high)/2;
  int lef=findsum(seg,qlow,qhigh,low,mid,2*pos+1);
  int rig=findsum(seg,qlow,qhigh,mid+1,high,2*pos+2);
  if(lef==-1)
    lef=0;
  if(rig==-1)
    rig=0;
  return lef+rig;
  
}

int main()
{
  int n;
  cin>>n;
  int *arr=new int[n];
  for(int i=0;i<n;i++)
    cin>>arr[i];
  float lim=log(n)/log(2);
  int size=pow(2,ceil(lim));
  int seg[size];
  seg[size]={-1};
  int l=0,r=n-1,pos=0;
  construct(arr,seg,l,r,pos);
  cout<<endl;
  for(int i=0;i<size;i++)
     cout<<seg[i]<<"\t";
  int q;
  int low=0,high=n-1;
  cin>>q;
  while(q)
  {
    int qlow,qhigh;
    cin>>qlow>>qhigh;
    cout<<findsum(seg,qlow,qhigh,low,high,pos)<<endl;
    q--;
  }



}
