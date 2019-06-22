#include<bits/stdc++.h>

using namespace std;

int rangeMinQuery(int *segtree,int qlow,int qhigh,int low,int high,int pos)
{
  if(low>=qlow && high<=qhigh)
      return segtree[pos];    //total overlap
  if(high<qlow || low>qhigh)
      return INT_MAX;         //no overlap
      
  int mid=(low+high)/2;
  return min( rangeMinQuery(segtree,qlow,qhigh,low,mid,2*pos+1), rangeMinQuery(segtree,qlow,qhigh,mid+1,high,2*pos+2) );
}


void ConstructTree(int *input,int *segtree,int low,int high,int pos)
{
  if(low==high)
  {
    segtree[pos]=input[low];
    return;
  }
  
  int mid=(low+high)/2;
  ConstructTree(input,segtree,low,mid,2*pos+1); //line number 1
  ConstructTree(input,segtree,mid+1,high,2*pos+2); //line number 2
  
  segtree[pos]=min(segtree[2*pos+1],segtree[2*pos+2]);

}


int main()
{
  int n,size;
  cout<<"Enter array size"<<endl;
  cin>>n;
  int input[n];
  float temp=log(n)/log(2);
  if(floor(temp)==ceil(temp))
     size=pow(2,temp);
  else
     size=pow(2,ceil(temp));
  size=size*2-1;
//  cout<<"size = "<<size<<endl;
  cout<<"enter elements \n";
  for(int i=0;i<n;i++)
    cin>>input[i];
  int segtree[size];
  
  //cout<<"initial seg array is "<<endl;
  for(int i=0;i<size;i++)
     segtree[i]=INT_MAX;
  int low=0,high=n-1,pos=0;
  ConstructTree(input,segtree,low,high,pos);
  cout<<"seg tree is"<<endl;
  for(int i=0;i<size;i++)
     cout<<segtree[i]<<" ";
  
  int q;
  cout<<"enter number of queries"<<endl;
  cin>>q;
  
  while(q)
  {
    int qlow,qhigh;
    cout<<"Enter range"<<endl;
    cin>>qlow>>qhigh;
    cout<<rangeMinQuery(segtree,qlow,qhigh,low,high,pos)<<endl;
    q--;
  }
}
 

