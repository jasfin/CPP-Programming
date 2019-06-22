#include<bits/stdc++.h>

using namespace std;

vector<int> convert(int i)
{
  vector<int> v;
  while(i!=0)
  {
    v.push_back(i%2);
    i/=2;
  }
  return v;
}

void display(char set[],int size)
{

 int nums=pow(2,size);
 for(int i=0;i<nums;i++)
 {
   vector<int> v=convert(i);
   for(int i=0;i<v.size();i++)
     if(v[i]==1)
       cout<<set[i]<<",";
   cout<<endl;
 }

}

int main()
{
 char set[]={'a','b','c'};
 display(set,3);
}
