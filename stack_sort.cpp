#include<iostream>
#include<stack>
using namespace std;

int main()
{
 stack<int> s1;
 stack<int> s2;
 int ch=1,val,item;
 while(ch==1)
 {
  cout<<"enter value to push";
  cin>>val;
  s1.push(val);
  cout<<"press 1 to continue";
  cin>>ch;
 }

 while(s1.empty()!=1)
 {
  item=s1.top();
  s1.pop();
  while(s2.empty()!=1)
  {
    if(item>s2.top())
    {
      s2.push(item);
      break;
    }
    else
    {
     s1.push(s2.top());
     s2.pop();
    }
  }
  if(s2.empty()==1)
    s2.push(item);
 }
 while(s2.empty()!=1)
 {
  cout<<s2.top()<<"\t";
  s2.pop();
 }
}
