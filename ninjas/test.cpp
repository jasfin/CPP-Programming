#include<bits/stdc++.h>
using namespace std;


vector<int> removeDuplicates(vector<int> input){

    // Write your code here
    int n=input.size();
   map<int,int> m;
   map<int,int>::iterator it;
    for(int i=0;i<n;i++)
       m[input[i]]++;
    vector<int> v(m.size());
    int i=0;
    for(it=m.begin();it!=m.end();it++,i++)
       v[i]=it->first;
     
    return v;
}
int main()
{
 vector<int> v1(3);
 v1[0]=1;
 v1[1]=2;
 v1[2]=2;
 vector<int> v=removeDuplicates(v1);
 for(int i=0;i<v.size();i++)
     cout<<v[i]<<"\t";
}
