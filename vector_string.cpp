#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
 vector<string> str;
 str.push_back("hello people of the country");
 str.push_back("india");
 
 for(int i=0;i<str.size();i++)
    cout<<str[i]<<"\n";
 vector<string>::iterator it;
 it=find(str.begin(),str.end(),"india");
 if(it!=str.end())
  cout<<"item is present";
 else
  cout<<"item is not present";
}
