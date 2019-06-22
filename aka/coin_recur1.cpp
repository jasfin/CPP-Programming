#include<iostream>

using namespace std;
int findchange(int *,int,int);
int main()
{
  int s[]={1,2,3};
  int m=2,tot;
  cin>>tot;
  cout<<findchange(s,m,tot);
}

int findchange(int *s,int m,int tot)
{
  if(tot==0)
    return 1;
  if(tot<0)
    return 0;
  if(m<0 && tot>0)
    return 0;
  return findchange(s,m-1,tot)+findchange(s,m,tot-s[m]);
}
