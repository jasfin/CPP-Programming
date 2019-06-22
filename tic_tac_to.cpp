#include<bits/stdc++.h>

using namespace std;

void display(char a[3][3])
{
   cout<<endl;
   for(int i=0;i<3;i++)
   {
     for(int j=0;j<3;j++)
         cout<<"|  "<<a[i][j];
     cout<<"|";
     cout<<endl;
     cout<<"-------------";
     cout<<endl;
   } 
}
 
int main()
{
  char a[3][3];
  for(int i=0;i<3;i++)
     for(int j=0;j<3;j++)
        a[i][j]=' ';
 // display(a);
  int player=1;
  int flag=0;
  int winner;
  int x,y;
  int count=0;
  int overx,overy;
  display(a);
  while(flag==0)
  {
     cout<<"enter position for player "<<player<<endl;
     cin>>x>>y;
     
     if(player==1)
     {
       a[x][y]='X';
       count++;
       player=2;
     }
     else
     {
       a[x][y]='Y';
       count++;
       player=1;
     }
     display(a);
     overx=0;
     overy=0;
     for(int i=0;i<3;i++)
     {
       overx=0;
       overy=0;
       for(int j=0;j<3;j++)
       {
         if(a[i][j]=='X')
           overx++;
         else if(a[i][j]=='Y')
           overy++;
       }
       if(overx==3)
       {
         winner=1;
         flag=1;
         break;
       }
       if(overy==3)
       {
         winner=2;
         flag=1;
         break;
       }
     }
     
     
     for(int i=0;i<3;i++)
     {
       overx=0;
       overy=0;
       for(int j=0;j<3;j++)
       {
         if(a[j][i]=='X')
           overx++;
         else if(a[j][i]=='Y')
           overy++;
       }
       if(overx==3)
       {   
         winner=1;
         flag=1;
         break; 
       }
       if(overy==3)
       {
         winner=2;
         flag=1;
         break;
       }
     }

     if(a[0][0]=='X' && a[1][1]=='X' && a[2][2]=='X')
     {
       winner=1;
       flag=1;
     }
     
     if(a[0][0]=='Y' && a[1][1]=='Y' && a[2][2]=='Y')
     {     
       winner=2;
       flag=1;
     }   

     if(a[0][2]=='X' && a[1][1]=='X' && a[2][0]=='X')
     {     
       winner=1;
       flag=1;
     }   
     
     if(a[0][2]=='Y' && a[1][1]=='Y' && a[2][0]=='Y')
     {     
       winner=2;
       flag=1;
     }   

     if(count==9)
        flag=9;
     

  }
  if(flag==9)
    cout<<"Game tied.."<<endl;
  else if(winner==1)
    cout<<"winner is player "<<winner<<endl;
  else if(winner==2)
    cout<<"winner is player "<<winner<<endl;
}
