#include<bits/stdc++.h>

using namespace std;

void reversal(string &str,int i)
{
 if(i==str.length()/2)
   return;
 swap(str[i],str[str.length()-i-1]);
 reversal(str,i+1);
}

int main()
{
 string str;
 getline(cin,str);
 reversal(str,0);
 cout<<str;
}
