#include<iostream>
#include<algorithm>
#include<string>

using namespace std;

int main()
{
 string s;
 cout<<"Enter a string";
 getline(cin,s);
 int n=s.length(),i;
 sort(s.begin(),s.end());
 do
 {
   string str=s;
   for(i=0;i<n/2;i++)
   {
     if(str[i]!=str[n-1-i])
          break;
   }
   if(i==n/2)
     cout<<str<<"\n";
  
 }while(next_permutation(s.begin(),s.end()));
}
