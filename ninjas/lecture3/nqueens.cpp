#include<bits/stdc++.h>

using namespace std;
int board[11][11];

bool isokay(int n,int row,int column)
{
  for(int i=row-1;i>=0;i--)       //checking in the same column to the top 
    if(board[i][column])
       return false;

  for(int i=row-1,j=column+1;i>=0 && j<n;i--,j++)   //checking top right diagonal
    if(board[i][j])
       return false;

  for(int i=row-1,j=column-1;i>=0 && j>=0;i--,j--)  //checking top left diagonal  
    if(board[i][j])
       return false;
                                                    //not checking same row or bottom portions as they aren't filled yet.
  return true;                     

}

void nqueens(int n,int row)
{
  if(n==row)                  //base case
  {
    for(int i=0;i<n;i++)
    {
      for(int j=0;j<n;j++)
       cout<<board[i][j]<<"\t";
      cout<<"\n";
    }
    cout<<"\n";
    return;
  } 

  for(int i=0;i<n;i++)         //traversing through each cell in the current row
    if(isokay(n,row,i))
    {
      board[row][i]=1;         //placing queen here
      nqueens(n,row+1);        //repeat for next row
      board[row][i]=0;         //undo our selection and repeat the loop
    }
  return;
}

int main()
{
 int n;
 cin>>n;
 for(int i=0;i<n;i++)
   for(int j=0;j<n;j++)
      board[i][j]=0;

 nqueens(n,0);
}
