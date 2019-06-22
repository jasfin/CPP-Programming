#include<bits/stdc++.h>

using namespace std;

bool compare(int *arr1,int *arr2)
{
  for(int i=0;i<25;i++)
    if(arr1[i]!=arr2[i])
       return false;
  return true;
}

void findoccur(string text,string pat)
{
  int n=text.length(),m=pat.length();
  int arr1[26]={0},arr2[26]={0};
  for(int i=0;i<m;i++)
  {
    arr2[pat[i]-97]++;
    arr1[text[i]-97]++;
  }

  for(int i=m;i<n;i++)
  {
   if(compare(arr1,arr2))
      cout<<"found at index "<<i-m<<endl;
   arr1[text[i-m]-97]--;
   arr1[text[i]-97]++;
  }
  if(compare(arr1,arr2))
      cout<<"found at index "<<n-m<<endl;

}
int main()
{
  string text,pat;
  cout<<"enter text and pat";
  getline(cin,text);
  getline(cin,pat);
  findoccur(text,pat);
}


