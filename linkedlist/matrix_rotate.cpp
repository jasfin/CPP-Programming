//rotate a matrix by 90 degrees in counterclockwise direction
#include<bits/stdc++.h>
using namespace std;

void rotatemat(int **mat,int n)
{
	for(int i=0;i<n;i++)
		for(int j=i+1;j<n;j++)
			swap(mat[i][j],mat[j][i]);

	for(int i=0;i<n;i++)
	    for(int j=0;j<n/2;j++)
			swap(mat[j][i],mat[n-1-j][i]);
	
}

int main()
{
	int n;
	cin>>n;
	int **mat=new int*[n];
	for(int i=0;i<n;i++)
		mat[i]=new int[n];

	for(int i=0;i<n;i++)
		for(int j=0;j<n;j++)
			cin>>mat[i][j];

	rotatemat(mat,n);
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
			cout<<mat[i][j]<<"\t";
		cout<<endl;
	}
}
