#include<bits/stdc++.h>

using namespace std;

void constructseg(int *arr,int *segtree,int low,int high,int pos)
{
   
  if(low==high)
  {
    segtree[pos]=arr[low];
    return;
  }
  int mid=(low+high)/2;
  constructseg(arr,segtree,low,mid,2*pos+1);
  constructseg(arr,segtree,mid+1,high,2*pos+2);
  segtree[pos]=min(segtree[2*pos+1],segtree[2*pos+2]);

}

int range(int *segtree,int qlow,int qhigh,int low,int high,int pos)
{
  if(low>=qlow && high<=qhigh)
    return segtree[pos];
  if(qhigh<low || qlow>high)
    return INT_MAX;

  int mid=(low+high)/2;
  int l=range(segtree,qlow,qhigh,low,mid,2*pos+1);
  int r=range(segtree,qlow,qhigh,mid+1,high,2*pos+2);
  return min(l,r);
}

int main()
{
  int n;
  cin>>n;
  float po=log(n)/log(2);
  int size=pow(2,ceil(po));
  cout<<"size is"<<size<<endl;
  int *arr=new int[n];
  for(int i=0;i<n;i++)
    cin>>arr[i];
  
  int segtree[size]={0};
  int low=0,high=n-1,pos=0;
  
  constructseg(arr,segtree,low,high,pos);
  cout<<endl<<"seg tree is"<<endl;
  for(int i=0;i<size;i++)
      cout<<segtree[i]<<"\t";
  int q;
  cin>>q;
  while(q)
  {
    int qlow,qhigh;
    cin>>qlow>>qhigh;
    cout<<range(segtree,qlow,qhigh,low,high,pos)<<endl;
    q--;
  }
}
