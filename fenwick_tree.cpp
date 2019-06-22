//fenwick tree or binary indexed tree to find sum of 1st k elements in an array.

#include<bits/stdc++.h>

using namespace std;

void update(int *fenwick,int i,int n,int item)
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
 index+=1;
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
  int arr[n];
  for(int i=0;i<n;i++)
    cin>>arr[i];

  int fenwick[n+1];
  for(int i=0;i<n+1;i++)
     fenwick[i]=0;

  for(int i=0;i<n;i++)
     update(fenwick,i,n,arr[i]);

  cout<<"the fenwick/binary indexed tree is "<<endl;
  for(int i=0;i<n+1;i++)
     cout<<fenwick[i]<<"\t";
  int ind;
  cout<<"enter range"<<endl;
  cin>>ind;
  cout<<findsum(fenwick,n,ind);
  cout<<"Enter index and value to update"<<endl;
  int val;
  cin>>ind>>val;
  val=val-arr[ind];
  update(fenwick,ind,n,val);

  cout<<"enter range"<<endl;
  cin>>ind;
  cout<<findsum(fenwick,n,ind); 
}
