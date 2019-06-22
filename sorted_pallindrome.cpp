/// display pallindromic words in sorted order.. eg: hello mom dad,   output : dad mom

#include<bits/stdc++.h>

using namespace std;

int main()
{
 string str;
 getline(cin,str);
 vector<string> v;
 string s;
 int len=str.length();
 for(int i=0;i<len;i++)
 {
   if(str[i]!=' ')
      s+=str[i];
   else
    {
      v.push_back(s);
      s.clear();
    }
 }
 v.push_back(s);
// for(int i=0;i<v.size();i++)
//   cout<<v[i]<<"\n";

  sort(v.begin(),v.end());
  for(int i=0;i<v.size();i++)
     cout<<v[i]<<"\n";
 cout<<"\n\n";
 int j;
 for(int i=0;i<v.size();i++)
 {
    int k=v[i].length();
    for(j=0;j<k/2;j++)
       if(v[i][j]!=v[i][k-j-1])
             break;
    if(j==k/2)
        cout<<v[i]<<"\n";
//    cout<<"hi";
 }





}

