#include<bits/stdc++.h>
using namespace std;

int main()
{
	string str,res;
	cin>>str;
	int j;
	for(int i=0;i<str.length();)
	{
		int count=1;
		for(j=i+1;j<str.length();j++)
		{
             if(str[i]==str[j])
                 count++;
             else
                 break;   
		}
		res.append(str,i,1);
		res+=(to_string(count));
		i=j;
	}
	cout<<res<<endl;
}