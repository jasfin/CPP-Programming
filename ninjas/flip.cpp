#include<bits/stdc++.h>
using namespace std;

int main()
{
  long int n;
  int m;
  cin>>n;
  cin>>m;
  int arr[m];
  for(int i=0;i<m;i++)
    cin>>arr[i];

  vector<int> v;
  while(n!=0)
  {
    v.push_back(n%2);
    n/=2;
  }

  reverse(v.begin(),v.end());
  for(int i=0;i<v.size();i++)
     cout<<v[i];
}
