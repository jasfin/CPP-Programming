#include<iostream>

using namespace std;

int main()
{
 int n;
 cin>>n;
 string str;
 for(int i=0;i<3;i++)
   str+=(char(97+(n-2)*3+i));
 cout<<str;
}
