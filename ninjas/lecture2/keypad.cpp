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

int keypad(int num, string output[]){
    /* Insert all the possible combinations of the integer number into the output string array. You do not need to
    print anything, just return the number of strings inserted into the array.
    */
  string str; 
  if(num/10==0)
  {
    str=convert(num);
    for(int i=0;str[i]!='\0';i++)
      output[i]=str[i];
    return str.length();
  }
     
  int now=num%10;
  int rem=num/10;
  
  int len=keypad(rem,output);
  int ilen=len;
  str=convert(now);
  for(int j=0;str[j]!='\0';j++)
  {
    for(int i=0;i<len;i++)
      output[len+i]=output[i]+str[j];
    len+=ilen;
    
  }
  for(int i=0;i<len-ilen;i++)
     output[i]=output[ilen+i];

  return len-ilen;   
}

int main()
{
 int num;
 cin>>num;
 string *output=new string[100];
 int len=keypad(num,output);
 for(int i=0;i<len;i++)
   cout<<output[i]<<"\n";
}
