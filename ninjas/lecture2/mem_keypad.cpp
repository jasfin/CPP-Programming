#include <bits/stdc++.h>
using namespace std;

string convert(int num)
{
  string str;
     switch(num)
     {
       case 2: str="abc";
               break;
       case 3: str="def";
               break;
       case 4: str="ghi";
               break;
       case 5: str="jkl";
               break;
       case 6: str="mno";
               break;
       case 7: str="pqrs";
               break;
       case 8: str="tuv";
               break;
       case 9: str="wxyz"; 
               break;
     }
  return str;
}

void subs(int num,string output)
{
 if(num==0)
 {
   cout<<output<<endl;
   return;
 }
 
 int now=num%10;
 string res=convert(now);
 for(int i=0;res[i]!='\0';i++)
   subs(num/10,res[i]+output);
}



int main()
{
 int num;
 cin>>num;
 string output;
 subs(num,output);
}
 
