#include<bits/stdc++.h>

using namespace std;

int main()
{
 vector<int> v;
 int n,item;
 cout<<"enter size";
 cin>>n;
 for(int i=0;i<n;i++)
 {
   cin>>item;
   v.push_back(item);
 }

 cout<<endl;
 make_heap(v.begin(),v.end());
 cout<<"the heap made is"<<endl;
 for(int i=0;i<n;i++)
   cout<<v[i]<<"\t";
 
 cout<<"the largest element is :"<<v.front()<<endl;

 v.push_back(77);
 push_heap(v.begin(),v.end());
 cout<<"largest element after adding 77 is :"<<v.front()<<endl;
 cout<<"heap now is"<<endl;
 for(int i=0;i<v.size();i++)
    cout<<v[i]<<"\t";
 pop_heap(v.begin(),v.end());
 cout<<"largest element after popping is :"<<v.front()<<endl;
 v.resize(v.size()-1);
 cout<<"the heap is "<<endl;
 for(int i=0;i<v.size();i++)
  cout<<v[i]<<"\t";
 sort_heap(v.begin(),v.end());
 

 cout<<"after the sort operation :"<<endl;
 for(int i=0;i<n;i++)
    cout<<v[i]<<"\t";

}
