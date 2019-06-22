#include<bits/stdc++.h>
using namespace std;

int main()
{
 int n;
 cin>>n; 
 vector<int> num;
 num.push_back(1);
 int count=1;
 for(int i=0;i<n;i++)
 {
   vector<int> v;
   for(int j=0;j<num.size()-1;j++)
   {
     if(num[j]==num[j+1])
        count++;
     else
     {
        v.push_back(count);
        v.push_back(num[j]);
        count=1;
     }
   }
   v.push_back(count);
   count=1;
   v.push_back(num[num.size()-1]);
   for(int k=0;k<v.size();k++)
       cout<<v[k];
   num=v;
//   cout<<"num is "<<endl;
//   for(int m=0;m<num.size();m++)
//      cout<<num[m];
   cout<<endl;
   v.clear();
  }
}
