
#include<iostream>
#include<set>
using namespace std;
int main()
{
    set<int> s;
    set<int>::iterator it;
    s.insert(10);
    s.insert(20);
    s.insert(2);
    s.insert(10);
    s.insert(5);
    s.erase(5);
    cout<<"\n size:"<<s.size();
   // cout<<"find result"<<s.find(20); error
    for(it=s.begin();it!=s.end();it++)
       cout<<"\t"<<*it;
    it=s.find(20);
    if(s.find(20)!=s.end())
      cout<<"\n 20 is present";
    else
      cout<<"20 is absent";
     // cout<<"\t"<<s[i];

     it=s.end(); --it;
    cout<<"last element is "<<*it;
//    cout<<s[1];   
}
