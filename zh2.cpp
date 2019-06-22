//   a1b3 should give abbb and c1d2c10 should give cddcccccccccc as output
#include<bits/stdc++.h>

using namespace std;

int main()
{
  string str;
  getline(cin,str);
  int n=str.length();
  for(int i=0,j;i<n;i++)
  {
    char ch=str[i];
    int num=0;
    for(j=i+1;j<n;j++)
      if(str[j]>=48 && str[j]<=57)
          num=num*10+(str[j]-'0');
      else
          break;
    i=j-1;
    for(int k=0;k<num;k++)
       cout<<ch;
  }
}
