#include<iostream>

using namespace std;
int findchange(int,int);
int main()
{
 int c,tot;
 cout<<"enter available coin limit";
 cin>>c;
/* int a[c];
   cout<<"enter coin values";
   for(int i=0;i<c;i++)
     cin>>a[i];*/
 cout<<"enter total amount to make";
 cin>>tot;
 cout<<findchange(c,tot);
}

int findchange(int c,int tot)
{
 if(c==0 && tot==0)
   return 1;
 else if(c==0 && tot!=0)
   return 0;
 else if(c>tot)
   return findchange(c-1,tot);
 else
   return(findchange(c-1,tot)+findchange(c,tot-c));
}
