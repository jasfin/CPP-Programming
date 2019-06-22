//sorting using a third parameter in the sort funciton

#include<bits/stdc++.h>

using namespace std;
typedef struct str str;
struct str
{
  int st;
  int et;
};

bool compare(str s1,str s2)
{
  return s1.st<s2.st;
}
int main()
{
  str arr[]={ {12,4},{4,8},{3,5},{7,9} };
  sort(arr,arr+4,compare);
  for(int i=0;i<4;i++)
     cout<<arr[i].st<<":"<<arr[i].et<<endl;
}



