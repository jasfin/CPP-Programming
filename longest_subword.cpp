#include<iostream>
#include<string>
using namespace std;
int main()
{
 int count,beg,max=0;
 string s1,s2;
 cout<<"enter 2 strings";
 getline(cin,s1);
 getline(cin,s2);
 for(int i=0;s1[i]!='\0';i++)
 {
  count=0; 
  for(int j=0;s2[j]!='\0';j++)
   {
    if(s1[i]==s2[j])
    {
     count++;
     i++;
    }
    else
     count=0;
    if(count>max)
    {
      max=count;
      beg=i;
    }
   }
 }
 cout<<max;
}
