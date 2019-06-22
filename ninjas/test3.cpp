#include<bits/stdc++.h>
using namespace std;


int anagram(char *a,char *b)
{
 int count[128],j;
 for(j=0;j<128;j++)
   count[j]=0;
 j=0;
 while(a[j] && b[j])
 {
   count[a[j]]++;
   count[b[j++]]--; 
 
 }

 for(j=0;j<128;j++)
   if(count[j]) 
     return 0;
 return 1;
 
}

int main()
{
 char *str="hello";
 char *s="elloh";
 
 cout<<anagram(str,s);
}
