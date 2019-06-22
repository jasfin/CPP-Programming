//given n nodes, find the number of different bsts that can be made from n
#include<bits/stdc++.h>
using namespace std;

int CountBst(int n)
{
	int *dp=new int[n+1];
	memset(dp,0,sizeof(dp));
	dp[0]=dp[1]=1;
	for(int i=2;i<=n;i++)
		for(int j=0;j<i;j++)
			dp[i]+=(dp[j]*dp[i-j-1]);

	int ele=dp[n];
	delete [] dp;
	return ele;
}

int main()
{
	int n;
	cin>>n;
	cout<<CountBst(n);
}