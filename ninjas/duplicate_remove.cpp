#include<bits/stdc++.h>

using namespace std;

int main()
{
 int arr[10];
 unordered_map<int,int> m;
 
 for(int i=0;i<10;i++)
   cin>>arr[i];
 for(int i=0;i<10;i++)
   m[arr[i]]++;
 for(auto it=m.begin();it!=m.end();it++)
    cout<<it->first<<"\t";
 cout<<endl<<m.size();
}
