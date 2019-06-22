#include<bits/stdc++.h>

using namespace std;
 
int main()
{
  int n;
  cin>>n;
  stack<int> s;
  for(int i=0;i<n;i++)
      s.push(n-i);
 
  int a;
  cin>>a;
  stack<int> sa;
  for(int i=0;i<a;i++)  //push a cards on top to sa
  {
    sa.push(s.top());
    s.pop();
  }

  int b;               //push b cards on top to sb
  cin>>b;
  stack<int> sb;
  for(int i=0;i<b;i++)
  {
    sb.push(s.top());
    s.pop();
  }

  while(sa.empty()!=1) //put back the a cards
  {
    s.push(sa.top());
    sa.pop();
  }

  int c;              //push c cards to q
  cin>>c;
  queue<int> q;
  for(int i=0;i<c;i++)
  {
     q.push(s.top());
     s.pop();
  }
  
  while(sb.empty()!=1) //put back the b cards
  {
    s.push(sb.top());
    sb.pop();
  }
                   
  while(q.empty()!=1)   //put back the c cards
  {
    s.push(q.front());
    q.pop();
  }

  while(s.empty()!=1)
   {
       cout<<s.top()<<"\t";
       s.pop();
   }
  
}
