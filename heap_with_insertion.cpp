#include<bits/stdc++.h>

using namespace std;

void heapify(int *arr,int n,int i)
{
 int largest=i;
 int l=2*i+1,r=2*i+2;

 if(l<n && arr[l]>arr[largest])
   largest=l;
 
 if(r<n && arr[r]>arr[largest])
   largest=r;

 if(largest!=i)
 {
  swap(arr[i],arr[largest]);
  heapify(arr,n,largest);
 }

}

void heapsort(int *arr,int n)
{
 for(int i=n-1;i>=0;i--)
 {
  swap(arr[0],arr[i]);
  heapify(arr,i,0);
 }
}

void heaptop(int *arr,int n,int i)
{
 if(i<0)
   return;
 
 int largest=i;
 int l=2*largest+1,r=2*largest+2;
 
 if(l<n && arr[l]>arr[largest])
   largest=l;

 if(r<n && arr[r]>arr[largest])
   largest=r;
 
 if(largest!=i)
 {
   swap(arr[i],arr[largest]);
   heaptop(arr,n,(i-1)/2);
 }
}



int main()
{
 int n;
 cin>>n;
 int *arr=new int[n+1];
 for(int i=0;i<n;i++)
   cin>>arr[i];

 for(int i=n/2-1;i>=0;i--)
    heapify(arr,n,i);

 cout<<"after heapifying"<<endl;
 for(int i=0;i<n;i++)
   cout<<arr[i]<<"\t";

 cout<<"Enter the next element to insert"<<endl;
 cin>>arr[n];

 heaptop(arr,n+1,(n-2)/2);
 cout<<"after heapifying"<<endl;
 for(int i=0;i<n+1;i++)
   cout<<arr[i]<<"\t";
 

 heapsort(arr,n+1);
 cout<<"after heapsort"<<endl;
 for(int i=0;i<n+1;i++)
   cout<<arr[i]<<"\t";
}
