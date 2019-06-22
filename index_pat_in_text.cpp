//print the first occurence of pattern in text
#include<bits/stdc++.h>

using namespace std;

int main()
{
  string text,pat;
  cin>>text>>pat;
  for(int i=0,j;i<=text.length()-pat.length();i++)
  {
     for(j=0;j<pat.length();j++)
         if(text[i+j]!=pat[j])
           break;
     if(j==pat.length())
     {
         cout<<i;
         break;
     }
  }

}     
