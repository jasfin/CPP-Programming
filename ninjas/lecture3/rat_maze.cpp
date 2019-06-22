#include<bits/stdc++.h>

using namespace std;
int mat[10][10];


void maze(int n,int row,int column)
{
  if(row==n-1 && column==n-1)
  {
   mat[row][column]=0;
   for(int i=0;i<n;i++)
   {
     for(int j=0;j<n;j++)
       cout<<mat[i][j]<<" ";
     cout<<"\n";
   }
   cout<<"\n";
   return;
  }
  
  if(row+1<n && mat[row+1][column]==1)
  {
    mat[row+1][column]=0;
    maze(n,row+1,column);
    mat[row+1][column]=1;
  }

  if(row-1>=0 && mat[row-1][column]==1)
  {
    mat[row-1][column]=0;
    maze(n,row-1,column);
    mat[row-1][column]=1;
    
  }

  if(column+1<n && mat[row][column+1]==1)
  {
    mat[row][column+1]=0;
    maze(n,row,column+1);
    mat[row][column+1]=1;
  }

  if(column-1>=0 && mat[row][column-1]==1)
  {
    mat[row][column-1]=0;
    maze(n,row,column-1);
    mat[row][column-1]=1;
  }
}
 

int main()
{
 int n;
 cin>>n;
 for(int i=0;i<n;i++)
  for(int j=0;j<n;j++)
    mat[i][j]=1;
 
 maze(n,0,0);
}
