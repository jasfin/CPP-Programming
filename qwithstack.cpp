#include<iostream>
#include<stack>
using namespace std;
stack<int> func(stack<int>,int);
int main()
{
 stack<int> s;
 long int q,x;
 int a;
 cin>>q;
 for(long int i=0;i<q;i++)
 {
  cin>>a;
  if(a==1)
  {
   cin>>x;
   s.push(x);
  }
  else if(a==3 || a==2)
    s=func(s,a);
 }
}

stack<int> func(stack<int> s,int a)
{
 stack<int> temp;
 while(s.empty()!=1)
 {
  temp.push(s.top());
  s.pop();
 }
 if(a==3)
 {
  cout<<temp.top();
  return s;
 }
 else if(a==2)
 {
  temp.pop();
  while(temp.empty()!=1)
  {
   s.push(temp.top());
   temp.pop();
  }
  return s;
 }
} 
