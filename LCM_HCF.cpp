#include<iostream>
using namespace std;
int main()
{
 int a,b;
 cout<<"enter 2 numbers";
 cin>>a>>b;
 int c=a,d=b;
 while(a!=b)
 {
  if(a>b)
    a-=b;
  else
    b-=a;
 }
 cout<<"HCF ="<<a<<"\n";
 cout<<"LCM ="<<(c*d)/a;
}
