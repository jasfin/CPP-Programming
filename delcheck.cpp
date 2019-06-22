#include<bits/stdc++.h>
 
using namespace std;

int main()
{
  string str;
  getline(cin,str);
  str.erase(2,5);
  cout<<str;
  map<int,int> m;
  m[8]++;
  cout<<"\n";
  cout<<m[8];
}
