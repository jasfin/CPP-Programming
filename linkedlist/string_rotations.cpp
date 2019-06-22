//find if a string is a rotation of another..eg: abcd,cdab are rotations but not abcd
// acdb

#include<bits/stdc++.h>
using namespace std;

string isrotation(string str1,string str2)
{
	if(str1.length()!=str2.length())
		return "not rotations";

	str1.append(str1);
	if(str1.find(str2)!=string::npos)
		return "Yes rotations";
	return "not rotations";

}
int main()
{
	string str1,str2;
	cin>>str1>>str2;
	cout<<isrotation(str1,str2);
}
