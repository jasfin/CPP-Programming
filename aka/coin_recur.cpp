#include<iostream>

using namespace std;
int findchange(int,int);
int main()
{
  int c,tot;
  cin>>c>>tot;
  cout<<findchange(c,tot);
}


int findchange(int c,int tot)
{
  if(c==0 && tot==0)
       return 1;
  if(c==0 && tot!=0)
       return 0;
  if(c>tot)
       return findchange(c-1,tot);
  return findchange(c-1,tot)+findchange(c,tot-c);
}
