//check if given string is a pallindromic permutation of some string
#include<bits/stdc++.h>

using namespace std;

int main()
{
 string str;
 getline(cin,str);
 map<char,int> m;
 for(int i=0;i<str.length();i++)
    m[str[i]]++;
  
 int n=str.length();
 int odd=0;
 for(auto it=m.begin();it!=m.end();it++)
     if(it->second%2==1)
          odd++;
  
 if((n%2==0 && odd==0) || (n%2==1 && odd==1))
    cout<<"yes";
 else
     cout<<"no";
}
