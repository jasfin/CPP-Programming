#include<iostream>

using namespace std;

int main()
{
  for(int i=0;i<=10;i++)
  {
     int ind=i+1;
     cout<<"for index "<<i<<":"<<endl;
     while(ind<=11)
     {
       cout<<ind<<"\t";
       ind+=(ind & -(ind));
     }
     cout<<endl;
  }
}

