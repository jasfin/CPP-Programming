#include<bits/stdc++.h>
#define max 10000
using namespace std;

bool prime[max];

void sieve()
{
  for(int i=0;i<max;i++)
      prime[i]=true;
  prime[0]=false;
  prime[1]=false;
  for(int i=2;i*i<=max;i++)
    if(prime[i]==true)
     for(int j=i*i;j<=max;j+=i)
         prime[j]=false;
    
}

int main()
{
  sieve();
  int n; 
  cin>>n;
  cout<<prime[n];
}
