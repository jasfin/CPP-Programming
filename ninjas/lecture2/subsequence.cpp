#include<bits/stdc++.h>

using namespace std;

int subs(string str,string *result)
{
 if(str[0]=='\0')
 {
   result[0]="";
   return 1;
 }

 string optstring=str.substr(1);
 int len=subs(optstring,result);
 for(int i=0;i<len;i++)
   result[len+i]=str[0]+result[i];
 return 2*len;
}  


int main()
{
 string str;
 getline(cin,str);
 string *result=new string[100];
 int num=subs(str,result);
 for(int i=0;i<num;i++)
   cout<<result[i]<<"\n";

}
