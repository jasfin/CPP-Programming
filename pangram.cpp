#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include<map>
#include<string>
#include <algorithm>
using namespace std;

int main()
{
 map<int,int> m;
 for(int i=97;i<=122;i++)
   m.insert(make_pair(i,0));
 int p;
 string s;
 cout<<"enter a line ";
 getline(cin,s);
 for(int i=0;s[i]!='\0';i++)
 {
  p=int(s[i]);
  if(p>=65 && p<=90)
    p+=32;
  if(p>=97 && p<=122)
    m.at(p)=1;
 }
 
 int i;
 for(i=97;i<=122;i++)
 {
  if(m.at(i)==0)
    break;
 }

 if(i<=122)
  cout<<"not a pangram";
 else
  cout<<"it is a pangram";
}
