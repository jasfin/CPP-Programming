#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
 vector<int> v;
 v.push_back(22);
 v.push_back(11);
 v.push_back(15);
 v.push_back(2);
 sort(v.begin(),v.end());
 for(int i=0;i<v.size();i++)
   cout<<v[i]<<"\t";
 reverse(v.begin(),v.end());
 cout<<"\n";
 for(int i=0;i<v.size();i++)
   cout<<v[i]<<"\t";

}
