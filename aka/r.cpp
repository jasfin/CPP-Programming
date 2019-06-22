#include<bits/stdc++.h>

using namespace std;

int main()
{
  int n;
  cin>>n;
  float temp=log(n)/log(2);
  cout<<pow(2,ceil(temp));
}
