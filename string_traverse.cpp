#include<iostream>
#include<string>

using namespace std;

int main()
{
 string str="hello";
 cout<<str.at(2)<<"\n";
 char *s="people";
 cout<<*s;
 s++;
 cout<<*s<<"\n";
 while(*s)
 {
  cout<<*s;
  s++;
 }
}
