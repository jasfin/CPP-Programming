#include<cstring>
#include<iostream>
//#include<stdio>
using namespace std;
int main()
{
 char str[20],temp[10],result[10];
 gets(str);
 int count=0,max=0;
 char ch[2];
 for(int i=0;str[i]!='\0';i++)
 {
  ch=str[i];
  if(ch!=' ')
  {
   count++;
   strcat(temp,ch);
  }
  else
  {
   if(count>max)
   {
     strcpy(result,temp);
     max=count;
   }
   count=0;
   strcpy(temp,'\0');
  }
 }
 cout<<"\n"<<result;
}
