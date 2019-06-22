#include <bits/stdc++.h>
using namespace std;

//int N;

bool isSafe(int N,int mat[][10], int r, int c)
{
    for (int i = 0; i < r; i++)
		if (mat[i][c] == 1)
			return false;

	for (int i = r, j = c; i >= 0 && j >= 0; i--, j--)
		if (mat[i][j] == 1)
			return false;

	for (int i = r, j = c; i >= 0 && j < N; i--, j++)
		if (mat[i][j] == 1)
			return false;

	return true;
}

void nQueen(int N,int mat[][10], int r, int c)
{
	
	if (c == 0 && r == N) 
	{
		for (int i = 0; i < N; i++) 
		{
			for (int j = 0; j < N; j++)
				cout << mat[i][j] << " ";
			cout << endl;
		}
		cout << endl;
		
		return;
	}


	for (int i = 0; i < N; i++) 
	{
		if (isSafe(N,mat, r, i)) 
		{
			mat[r][i] = 1;

		    nQueen(N,mat, r + 1, 0);

			mat[r][i] = 1;
		}
	}
}

int main()
{
	
        int N;
        cin>>N;
	int mat[10][10];

	for(int i=0;i<N;i++)
	  for(int j=0;j<N;j++)
	     mat[i][j]=0;
	nQueen(N,mat, 0, 0);

	return 0;
}

