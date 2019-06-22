#include<bits/stdc++.h>

using namespace std;

void update(int *fenwick,int n,int i,int item)
{
  int index=i+1;
  while(index<=n)
  {
    fenwick[index]+=item;
    index+=( index & -(index));
  }
}

int findsum(int *fenwick,int n,int index)
{
  int sum=0;
  index++;
  while(index>0)
  {
     sum+=fenwick[index];
     index-=( index & -(index));
  }
  return sum;
}

int main()
{
  int n; 
  cin>>n;
  int *arr=new int[n];
  for(int i=0;i<n;i++)
     cin>>arr[i];
  int *fenwick=new int[n+1];
  for(int i=0;i<n+1;i++)
      fenwick[i]=0;

  for(int i=0;i<n;i++)
     update(fenwick,n,i,arr[i]);
  
  cout<<"fenwick tree is"<<endl;
  for(int i=0;i<n+1;i++)
     cout<<fenwick[i]<<"\t";
  cout<<endl;
  cout<<"enter range";
  int range;
  cin>>range;
  cout<<findsum(fenwick,n,range)<<endl;
  int val,ind;
  cout<<"Enter value to update and the index";
  cin>>val>>ind;
  val-=arr[ind];
  update(fenwick,n,ind,val);
  cout<<"fenwick tree is "<<endl;
  for(int i=0;i<n+1;i++)
     cout<<fenwick[i]<<"\t";
  cout<<"enter range to find sum";
  cin>>range;
  cout<<findsum(fenwick,n,range)<<endl;
}
