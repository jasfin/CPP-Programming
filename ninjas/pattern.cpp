#include<bits/stdc++.h>

using namespace std;

int main()
{
 int n;
 cin>>n;
 int num=1;
 // cout<<1<<endl<<11<<endl;
 for(int i=0;i<n;i++)
 {
   vector<int> v;
   while(num!=0)
   {
     v.push_back(num%10);
     num/=10;
   }
   int val=0,count=1;
   reverse(v.begin(),v.end());
   for(int j=0;j<v.size()-1;j++)
    if(v[j]==v[j+1])
      count++;
    else
    {
      val=val*10+count;
      val=val*10+v[j];
      count=1;
    }
    val=val*10+count;
    val=val*10+v[v.size()-1];

    cout<<val<<endl;
    v.clear();
    num=val;
  }
}  
