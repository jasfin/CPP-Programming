#include<iostream>
#include<vector>
using namespace std;

int main()
{
 //vector<int> v;
 int n;
 cin>>n;
 vector<int> v(n);
 cout<<"\nenter elements";
 for(int i=0;i<n;i++)
    cin>>v[i];
 int count=0;
 for(int i=0;i<n;i++)
   if(v[i]!=0)
     v[count++]=v[i];
 for(int j=count;j<n;j++)
     v[count++]=0;
 cout<<"\n";
 for(int i=0;i<n;i++)
   cout<<v[i]<<"\t";
}
