#include<bits/stdc++.h>
using namespace std;

int main()
{
 priority_queue< int > pq;
 priority_queue< int,vector<int>,greater<int> > pq1;
 int n;
 cin>>n; 
 for(int i=0;i<n;i++)
 {
   int item;
   cin>>item; 
   pq.push(item);
   pq1.push(item);
 }

 while(pq.empty()!=1)
 {
   cout<<pq.top()<<"\t";
   pq.pop();
 }
 cout<<endl<<endl;
 while(pq1.empty()!=1)
 {
   cout<<pq1.top()<<"\t";
   pq1.pop();
 }

}
