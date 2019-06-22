//abc 1 will give output 3 and geeksforgeeks 2 will give output as 4..ie;count the number of letters with no. of occurences=n..consecutive letters are counted once only.
#include<bits/stdc++.h>

using namespace std;

int main()
{
  int n;
  string str;
  cin>>str;
  cin>>n;
  map<char,int> m;
  for(int i=0;i<str.length();i++)
     if(str[i]!=str[i+1])
        m[str[i]]++;

  int count=0;
  map<char,int>::iterator it;
  for(it=m.begin();it!=m.end();it++)
      if(it->second==n)
         count++;

  cout<<count;
}
