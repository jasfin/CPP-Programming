#include<bits/stdc++.h>
using namespace std;

void func(pair<int,int> p1,pair<int,int> p2)
{
   if(p1.first<p2.first)
     return false;
   return true;
}

int extractmin(vector< pair<int,int> > &v)
{
  int pos=v[0].second;  //index of the next element to burn
  pop_heap(v.begin(),v.end(),func);
  v.pop_back();
  return pos;
}


int main()
{
 int n;
 cin>>n;
 vector<int> graph[n];
 int e;
 cin>>e; 
 while(e--)
 {
   int a,b; 
   cin>>a>>b;
   graph[a].push_back(b);
   graph[b].push_back(a);
 }

 int ebt[n];
 for(int i=1;i<n;i++)
   ebt[i]=INT_MAX;
  
 ebt[0]=0;
 pair<int,int> p;

 vector< pair<int,int> > v;
 for(int i=0;i<n;i++)
 {
   p.first=ebt[i]; 
   p.second=i;
   v.push_back(p);
 }

 make_heap(v.begin(),v.end(),func);
 for(int i=0;i<n;i++)
 {
   int curr=extractmin(v);
   bv[curr]=1;
   for(int j=0;j<
