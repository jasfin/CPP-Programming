#include<bits/stdc++.h>

using namespace std;

int main()
{
 int c,tot;
 cin>>c>>tot;
 int t[c+1][tot+1];
 for(int i=0;i<=tot;i++)
     t[0][i]=0;
 t[0][0]=1;
 for(int i=1;i<=c;i++)
   for(int j=0;j<=tot;j++)
     if(i>j)
       t[i][j]=t[i-1][j];
     else
       t[i][j]=t[i-1][j]+t[i][j-i];
 
  for(int i=0;i<=c;i++)
  {
     for(int j=0;j<=tot;j++)
          cout<<t[i][j]<<"\t";
     cout<<endl;
  }

}
