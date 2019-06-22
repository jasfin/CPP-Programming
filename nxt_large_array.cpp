// rearrange the input array such that arr[i]=next highest element in the array, if no such element exist just print -1 or _...
//eg: 13,6,7,12 becomes -1 7 12 13
#include<bits/stdc++.h>

using namespace std;

int main()
{
 int n;
 cin>>n;
 vector<int> v(n);
 for(int i=0;i<n;i++)
     cin>>v[i];
 vector<int> res;
 map<int,int> m;
 
 for(int i=0;i<n;i++)
 {
   int diff=INT_MAX;
   int temp=-1;
   for(int j=0;j<n;j++)
     if(m[v[j]]==0 && v[j]-v[i]>0 && v[j]-v[i]<diff)
     {            
       temp=v[j]; 
       diff=v[j]-v[i];
     }
    res.push_back(temp);
    m[temp]=1;
 }
 for(int i=0;i<res.size();i++)
    cout<<res[i]<<"\t";
}
