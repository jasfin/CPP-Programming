#include<bits/stdc++.h>

using namespace std;

int main()
{
  map<int,int>m1,m2;
  for(int i=0;i<5;i++)
     m1[i]=2;
 m2[3]=0; 
 m2.insert(m1.begin(),m1.end());

  cout<<"\nusing insert function\n";
  for(int i=0;i<5;i++)
      cout<<m2[i];

  m2=m1;
  
  cout<<"\nusing = operator\n";
  for(int i=0;i<5;i++)
      cout<<m2[i];



}
