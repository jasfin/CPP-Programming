#include<bits/stdc++.h>

using namespace std;

int main()
{
  string str1,str2;
  getline(cin,str1);
  getline(cin,str2);
  int n=str1.length();
  int m=str2.length();
  int count=0;
  for(int i=0,j;i<=n-m;i++)
  {
    for(j=0;j<m;j++)
    {
      if(str1[i+j]!=str2[j])
         break;
    }
    if(j==m)
       count++;
  }

  cout<<count;
}
