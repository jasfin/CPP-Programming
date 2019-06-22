#include<bits/stdc++.h>
using namespace std;

int precedence(char ch)
{
	switch(ch)
	{
		case '$': return 0;
		          break;
		case '-': return 1;
		          break;
		case '+': return 1;
		          break;
		case '*': return 2;
		          break; 
	}
}
string Infix2Postfix(string str)
{
	string res;
	stack<char> s;
	s.push('$');
	for(int i=0;str[i]!='\0';i++)
	{
		if(isalpha(str[i]))
			res+=str[i];
		else if(precedence(s.top())<precedence(str[i]))
			s.push(str[i]);
		else
			{
				while(precedence(str[i])<=precedence(s.top()))
				{
					res+=s.top();
					s.pop();
				}
				s.push(str[i]);
		    }
	}

	while(s.top()!='$')
	{
		res+=s.top();
		s.pop();
	}

	return res;
}

int main()
{
	string str;
	cin>>str;
	cout<<Infix2Postfix(str)<<endl;
}