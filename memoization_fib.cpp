#include<iostream>
#include<map>

using namespace std;
int fib(int);
map<int,int> m; 
int main()
{
 int n;
 cout<<"enter number";
 cin>>n;
 cout<<fib(n);
}


int fib(int n)
{
  int val;
  if(m[n])
    val=m[n];
  else if(n==0 || n==1)
    val=1;
  else 
    val=fib(n-1)+fib(n-2);
   
   m[n]=val;
   return val;
}
