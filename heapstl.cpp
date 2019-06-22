#include<bits/stdc++.h>

using namespace std;

int main()
{
  int n;
  cin>>n;
  vector<int> v;
  int item;
  for(int i=0;i<n;i++)
  {
     cin>>item;
     v.push_back(item);
  }
  make_heap(v.begin(),v.end());
  sort_heap(v.begin(),v.end());
  for(int i=0;i<n;i++)
     cout<<v[i]<<"\t";

  make_heap(v.begin(),v.end());
  v.push_back(44);
  push_heap(v.begin(),v.end());
  cout<<endl;
  for(int i=0;i<n;i++)
     cout<<v[i]<<"\t";
  cout<<"top element is"<<v[0]<<endl;

  pop_heap(v.begin(),v.end());
  cout<<endl;
  for(int i=0;i<n;i++)
    cout<<v[i]<<"\t";
  cout<<"top element is"<<v[0]<<endl;

}
