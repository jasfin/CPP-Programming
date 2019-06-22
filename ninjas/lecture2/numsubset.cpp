#include<bits/stdc++.h>

using namespace std;


void subset(int arr[],int ind,int n,vector<int> v)
{
  if(ind==n)
  {
    for(int i=0;i<v.size();i++)
       cout<<v[i]<<" ";
    cout<<endl;
    return;
  }

 subset(arr,ind+1,n,v);
 v.push_back(arr[ind]);
 subset(arr,ind+1,n,v);
}

void subs(int arr[],int n)
{
 int ind=0;
 vector<int> v;
 subset(arr,ind,n,v);
}



int main()
{
 int n;
 cin>>n;
 int *arr=new int[n];
 for(int i=0;i<n;i++)
   cin>>arr[i];
 subs(arr,n);
}
