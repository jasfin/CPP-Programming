#include<iostream>
#include<map>

using namespace std;
int findchange(int,int,int);
map<int,int> m;
int main()
{
 int c,tot;
 cout<<"enter available coin limit";
 cin>>c;
/* int a[c];
   cout<<"enter coin values";
   for(int i=0;i<c;i++)
     cin>>a[i];*/
// map<int,int> m;
 m[0]=0;
 cout<<"enter coin values";
 for(int i=1;i<=c;i++)
   cin>>m[i];
 cout<<"enter total amount to make";
 cin>>tot;
 cout<<findchange(m[c],c,tot);
}

int findchange(int ele,int c,int tot)
{
 if(m[c]==0 && tot==0)
   return 1;
 else if(m[c]==0 && tot!=0)
   return 0;
 else if(m[c]>tot)
   return findchange(m[c-1],c-1,tot);
 else
   return(findchange(m[c-1],c-1,tot)+findchange(m[c],c,tot-m[c]));
}





