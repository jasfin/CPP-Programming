//print a given odd length string as X with the intersection point being the center alphabet..
#include<bits/stdc++.h>

using namespace std;

int main()
{
 string str;
 getline(cin,str);
 int n=str.length();
 for(int i=0;i<n/2;i++)
 {
   for(int space=0;space<i;space++)
       cout<<" ";
   cout<<str[i];
   for(int k=i;k<n-i;k++)
       cout<<" ";
   cout<<str[n-i-1]<<endl;
 }

 for(int i=0;i<=n/2;i++)
    cout<<" ";
 cout<<str[n/2]<<endl; 
 for(int i=n/2-1,j=2;i>=0;i--,j+=2)
 {
   for(int space=0;space<i;space++)
     cout<<" ";
   cout<<str[i];
   for(int k=0;k<j;k++)
     cout<<" ";
   cout<<str[n-i-1]<<endl;
 }
   
   

}
     
