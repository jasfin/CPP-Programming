#include<bits/stdc++.h>

using namespace std;

void buildseg(int *arr,int *seg,int low,int high,int pos)
{
  if(low==high)
   {
     seg[pos]=arr[low];
     return;
   }

  int mid=(low+high)/2;
  buildseg(arr,seg,low,mid,2*pos+1);
  buildseg(arr,seg,mid+1,high,2*pos+2); 

  seg[pos]=seg[2*pos+1]+seg[2*pos+2];
}

int findres(int *seg,int qlow,int qhigh,int low,int high,int pos)
{
 
  if(low>=qlow && high<=qhigh)
     return seg[pos];
  if(high<qlow || low>qhigh)
     return -1;
  
  int mid=(low+high)/2;

  int lsum=findres(seg,qlow,qhigh,low,mid,2*pos+1);
  int rsum=findres(seg,qlow,qhigh,mid+1,high,2*pos+2);
  if(lsum==-1)
     lsum=0;
  if(rsum==-1)
     rsum=0;
  return lsum+rsum;
}
  
int main()
{
 int n,size;
 cout<<"enter number of elements"<<endl;
 cin>>n;
 int temp=log(n)/log(2);
 if(floor(temp)==ceil(temp))
  size=pow(2,temp);
 else
  size=pow(2,ceil(temp));

 size=size*2-1;
 int *arr=new int[n];
 cout<<"\n enter elements";
 for(int i=0;i<n;i++)
    cin>>arr[i];

 int low=0,high=n-1,pos=0,seg[size];
 buildseg(arr,seg,low,high,pos);

 cout<<"\n the segment tree is:\n";
 for(int i=0;i<size;i++)
    cout<<seg[i]<<"\t";

 cout<<"\nenter number of queries"<<endl;
 int q,l,r;
 cin>>q;
 while(q)
 {
   cout<<"enter l and r"<<endl;
   cin>>l>>r;
   cout<<findres(seg,l,r,low,high,pos)<<"\n";
   q--;
 }
} 
