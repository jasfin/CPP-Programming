#include<bits/stdc++.h>
using namespace std;

int main()
{
  string str;
  getline(cin,str);
  istringstream ss(str);
  string s1;
  while(ss>>s1)
  {
    sort(s1.begin(),s1.end());
    cout<<s1<<" ";
  }

}
