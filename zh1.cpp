//rearrange the input array such that first element is the first largest and second element is the first smallest and so on...

#include<bits/stdc++.h>

using namespace std;

int main()
{
 int n;
 vector<int> v;
 cin>>n;
 int arr[n];
 for(int i=0;i<n;i++)
  cin>>arr[i];
 sort(arr,arr+n);
 int i,j;
 for(i=0,j=n-1;i<j;i++,j--)
 {
   v.push_back(arr[j]);
   v.push_back(arr[i]);
 }
 if(i==j)
   v.push_back(arr[i]);
 for(int i=0;i<v.size();i++)
    cout<<v[i]<<"\t";
}

