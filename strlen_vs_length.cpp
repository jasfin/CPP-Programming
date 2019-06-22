#include<cstring>
#include<iostream>
#include<cctype>
using namespace std;
int main()
{
 string str="";
 str.append("hello\0now");
 cout<<"input: "<<str<<endl;
// cout<<"strlen="<<strlen(str);
 cout<<"length="<<str.length();
 cout<<str;
}
