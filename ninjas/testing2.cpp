#include<bits/stdc++.h>

using namespace std;

int main()
{
 map<char,int> m,time;
 string str;
 int t=0;
 getline(cin,str);
 for(int i=0;str[i]!='\0';i++)
 {
   m[str[i]]++;
   t++;
   time[str[i]]=t;
 }

 set<char> s;
 set<int> st;
 for(auto it=m.begin();it!=m.end();it++)
     if(it->second==1)
     {
       s.insert(it->first);
       st.insert(time[it->first]);
     }
// for(auto it=s.begin();it!=s.end();it++)
//     cout<<*it<<"\t";

 if(s.size()==0)
    cout<<str[0];
 else
 {
   char result;
   int ele=*(st.begin());
   for(auto it=s.begin();it!=s.end();it++)
       if(time[*it]==ele)
       {
         result=*it;
         break;
       }

   cout<<result;
 }

}
