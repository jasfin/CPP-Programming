#include<bits/stdc++.h>

using namespace std;

void subs(string str,string output)
{
 if(str.length()==0)
 {
   cout<<output<<endl;
   return;
 }
 subs(str.substr(1),output);
 subs(str.substr(1),output+str[0]);
}


int main()
{
  string str;
  getline(cin,str);
  string output;
  subs(str,output);
}





























