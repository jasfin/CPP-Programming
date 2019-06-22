#include<bits/stdc++.h>

using namespace std;

int main()
{
  map<int,int> m;
/*  m[2]=89;
  m[19]=20;
  m[7]=66; */
  int n;
  cout<<"enter limit";
  cin>>n;
  int item;
  cout<<"Enter elements";
  for(int i=0;i<n;i++)
  {
    cin>>item;
    m[item]=i;
  }


  for(auto ref=m.begin();ref!=m.end();ref++)
      cout<<ref->first<<"\t";
}
