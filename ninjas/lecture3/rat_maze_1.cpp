#include<bits/stdc++.h>

using namespace std;

void mazepath(int maze[][10],int n,int **solution,int x,int y)
{
  if(x>=n || y>=n || x<0 || y<0 || maze[x][y]==0 || solution[x][y]==1)
    return;
 
  if(x==n-1 && y==n-1)
  {
    solution[x][y]=1;
    for(int i=0;i<n;i++)
    {
      for(int j=0;j<n;j++)
        cout<<solution[i][j]<<" ";
      cout<<endl;
    }
    cout<<endl;
    solution[x][y]=0;
    return;
  }

  solution[x][y]=1;
  mazepath(maze,n,solution,x-1,y);
  mazepath(maze,n,solution,x+1,y);
  mazepath(maze,n,solution,x,y-1);
  mazepath(maze,n,solution,x,y+1);
  solution[x][y]=0;
}
     
void mazehelp(int maze[][10],int n)
{
  int **solution=new int*[n];
  for(int i=0;i<n;i++)
    solution[i]=new int[n];
  mazepath(maze,n,solution,0,0);
}

int main()
{
 int n;
 cin>>n;
 int maze[10][10];
 cout<<"enter values of the maze"<<endl;
 for(int i=0;i<n;i++)
  for(int j=0;j<n;j++)
    cin>>maze[i][j];
 cout<<endl<<endl;  
 mazehelp(maze,n);

}
