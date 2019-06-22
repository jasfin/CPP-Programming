#include<bits/stdc++.h>

#define maxi 100000;

using namespace std;

bool prime[100001];

void sieve(int n)
{
 // bool prime[n+1];
  memset(prime,true,sizeof(prime));
  for(int i=2;i*i<=n;i++)
     if(prime[i]==true)
        for(int j=i*i;j<=n;j+=i)
           prime[j]=false;
      
 /* for(int i=2;i<=n;i++)
   if(prime[i]==true)
     cout<<i<<" ";
 */
}


int main()
{
  int n;
  //cin>>n;
  sieve(100000);
  cout<<"\n enter number to check";
  cin>>n;
  if(prime[n])
    cout<<"\nprime";
  else
    cout<<"\nnot a prime";
  cout<<"maxi is "<<maxi;
  return 0;
}
