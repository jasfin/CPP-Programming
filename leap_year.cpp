#include<iostream>
using namespace std;

bool leapyear(int year)
{
  if(year%400==0 || year%4==0 && year%100!=0)
     return true;
  return false;
}

int main()
{
 int y;
 cin>>y;
 if(leapyear(y))
   cout<<"leap year";
 else
   cout<<"not a leap year";
}
