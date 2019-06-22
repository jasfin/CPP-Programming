/*Mergesort works by dividing nodes in half at each level until the number of nodes becomes 1 hence total number of times we would need to do this would be ⌈log⁡n⌉
    and for each level we perform O(n) work hence total time taken will be O(nlogn)   */

#include<bits/stdc++.h>

using namespace std;

void mergesort(int *a,int i,int mid,int j)
{
  int l1=i,m=mid,l2=mid+1,r=j;
  int *c=new int[j-i+1],k=0;
  while(l1<=m && l2<=r)
  {
     if(a[l1]<a[l2])
       c[k++]=a[l1++];
     else
       c[k++]=a[l2++];
  }

  if(l1<=m)
   while(l1<=m)
    c[k++]=a[l1++];

  if(l2<=r)
   while(l2<=r)
    c[k++]=a[l2++];


  for(int ind=i,ind1=0;ind<=j;ind++,ind1++)
    a[ind]=c[ind1];

}

void merge(int *a,int i,int j)
{
  if(i==j)
    return;

  int mid=(i+j)/2;
  merge(a,i,mid);
  merge(a,mid+1,j);
  mergesort(a,i,mid,j);
}



int main()
{
  int n;
  cin>>n;
  int *arr=new int[n];
  for(int i=0;i<n;i++)
     cin>>arr[i];

  merge(arr,0,n-1);
  for(int i=0;i<n;i++)
    cout<<arr[i]<<"\t";
}
