#include<bits/stdc++.h>
using namespace std;

void subset(vector<int> v,int n,int len,vector<int> result)
{
 if(n==len)
 {
   for(int i=0;i<result.size();i++)
      cout<<result[i]<<" ";
   cout<<endl;
   return;
 }

 subset(v,n+1,len,result);
 result.push_back(v[n]);
 subset(v,n+1,len,result);

}
int main()
{
 int a=1 ^ 2;
 cout<<a;
 int n;
 cin>>n;
 vector<int> v(n),result;
 for(int i=0;i<n;i++)
  cin>>v[i];
 subset(v,0,n,result);
}
