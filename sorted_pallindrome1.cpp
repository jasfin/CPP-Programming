#include<bits/stdc++.h>

using namespace std;

int main()
{
 string str;
 getline(cin,str);
 istringstream ss(str);
 vector<string> v;
 string s;
 while(ss>>s)
   v.push_back(s);
 
 for(int i=0;i<v.size();i++)
    cout<<v[i]<<"\n";

 sort(v.begin(),v.end());
 cout<<endl<<endl;
 for(int i=0,j;i<v.size();i++)
 {
   string temp=v[i];
   int k=temp.length();
   for(j=0;j<k/2;j++)
      if(temp[j]!=temp[k-j-1])
         break;
   if(j==k/2)
      cout<<temp<<endl;
 }
}
