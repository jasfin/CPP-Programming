#include<string>
#include<iostream>

using namespace std;

int main()
{
  string str[4];
  for(int i=0;i<4;i++)
 {
  cout<<"enter string "<<i<<"\n";
  cin>>str[i];
 }
 for(int i=0;i<4;i++)
  cout<<str[i]<<"\n";
}
