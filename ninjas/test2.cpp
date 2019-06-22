#include<bits/stdc++.h>
using namespace std;

vector<int> t(52);

bool compare(int i,int j)
{
  return t[i]<t[j];
}

int main()
{
 string str;
 int time=0,index;
 vector<int> v(52,0);
// vector<int> t(52);
 getline(cin,str);
 for(int i=0;str[i]!='\0';i++)
 {  
    if(str[i]<=90)
      index=str[i]-65;
    else 
      index=str[i]-71;
    time++;
    v[index]++;
    t[index]=time;
 }
 
 vector<int> res(52);
 int j=0;
 for(int i=0;i<52;i++)
   if(v[i]==1)
      res[j++]=i;
 
 cout<<"res is "<<endl;
 for(int i=0;i<res.size();i++)
     cout<<res[i]<<"\t";
 cout<<endl;
/* for(int i=0;i<j;i++)
 {
   for(int k=i+1;k<j;k++)
       if(t[res[k]]<t[res[i]])
  */               
 if(res.size()==0)
    cout<<str[0];
 else
 {
   sort(res.begin(),res.end(),compare);
   cout<<res[0];
 }
}
