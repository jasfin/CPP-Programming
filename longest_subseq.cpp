#include<iostream>
#include<string>

using namespace std;

int main()
{
 string s1,s2;
 cout<<"enter 2 strings";
 getline(cin,s1);
 getline(cin,s2);
 int m=s1.length();
 int n=s2.length();
 int a[m+1][n+1];
 for(int i=0;i<=n;i++)
    a[m][i]=0;
 for(int i=0;i<=m;i++)
    a[i][n]=0;

 for(int i=m-1;i>=0;i--)
  for(int j=n-1;j>=0;j--)
   if(s1[i]==s2[j])
     a[i][j]=1+a[i+1][j+1];
   else
     a[i][j]=0;    
 for(int i=0;i<=m;i++)
 {
   cout<<"\n";
   for(int j=0;j<=n;j++)
   cout<<"\t"<<a[i][j];
 }
}

  
