//check if given string is permutation of a palindrome ....idea is that frequecy of every letter is even for even length string and except one it is odd for odd length string....

#include<iostream>
#include<string>

using namespace std;
string palin(string);
int main()
{
 string s1;
 cout<<"Enter string";
 getline(cin,s1);
 cout<<palin(s1);
}

string palin(string s1)
{

 int n=s1.length();
 int flag=0;
 int vis[n]={0};
 for(int i=0;i<n;i++)
 {
  if(vis[i]==1)
     i++;
  if(i>=n)   break;
  //flag=0;
  //vis[i]=1;
   for(int j=i+1;j<n;j++)
   {
    if(s1[i]==s1[j] && vis[j]==0)
      {
    //   flag=1;
       vis[i]=1;
       vis[j]=1;
       break;
      }
   }
  
 }
 int count=0; 
 for(int i=0;i<n;i++)
    if(vis[i]==0)
      count++;
 if((n%2==0 && count==0) || (n%2!=0 && count==1))
    return "YES";
 else
    return "NO";
}
