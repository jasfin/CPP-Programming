//remove the character x from the given string

#include<iostream>
using namespace std;

void removed(char str[])
{
 if(str[0]=='\0')
  return;
 
 if(str[0]!='x')
  removed(str+1);
 else
 {
  for(int i=0;str[i]!='\0';i++)
    str[i]=str[i+1];
  removed(str+1);
 }
}

int main()
{
 char str[100];
 cin>>str;
 cout<<str<<"\n";
 removed(str);
 cout<<str;
}
