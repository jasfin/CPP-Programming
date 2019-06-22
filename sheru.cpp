#include<bits/stdc++.h>

using namespace std;

int main()
{
 int n;
 cin>>n;
 for(int i=0;i<n;i++)
   cout<<"  ";
 cout<<0<<"\n";
 vector<int> v;
 v.push_back(0);
 for(int i=0;i<n;i++)
 {
   for(int space=n-1;space>i;space--)
         cout<<"  ";
   v.push_back(i+1);
   for(int k=v.size()-1;k>=0;k--)
     cout<<v[k]<<" ";
   for(int k=1;k<v.size();k++)
     cout<<v[k]<<" ";
   cout<<endl;
 }
}
     
