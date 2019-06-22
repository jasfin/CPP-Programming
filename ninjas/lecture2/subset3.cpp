#include<bits/stdc++.h>                                                                

using namespace std;

void subs(string str,string result)
{
  if(str.length()==0)
  {
    cout<<result<<endl;
    return;
  }
  subs(str.substr(1),result);
  subs(str.substr(1),result+str[0]);
}  

int main()
{
 int a[3]={1,2,3};
 string str;
 subs("hello",str);
}
