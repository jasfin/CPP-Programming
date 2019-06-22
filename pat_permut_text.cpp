//report occurences of pat and its permutations in a text...using 2 count arrays...

#include<bits/stdc++.h>

using namespace std;

int compare(int *a,int *b)
{
 for(int i=0;i<26;i++)
   if(a[i]!=b[i])
    return 0;

  return 1;
}

void find(string pat,string text)
{
 int m=pat.length(),n=text.length();
 int countp[26]={0},countt[26]={0};
 for(int i=0;i<m;i++)
 {
   countp[int(pat[i])-97]++;
   countt[int(text[i])-97]++;
 }

 for(int i=m;i<n;i++)
 {
  if(compare(countp,countt))
    cout<<"found at index "<<i-m<<endl;
   
  countt[int(text[i-m])-97]--;
  countt[int(text[i])-97]++;
 }
 if(compare(countp,countt))
   cout<<"found at index "<<n-m<<endl;
}
   


int main()
{
 string pat,text;
 cout<<"enter pattern and text";
 cin>>pat>>text;
 cout<<"pat is : "<<pat<<endl;
 cout<<"text is: "<<text<<endl;
 find(pat,text);
}
