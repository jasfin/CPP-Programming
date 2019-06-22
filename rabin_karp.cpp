#include<bits/stdc++.h>

using namespace std;

void disp(string pat,string text)
{
 int prime=3;
 int m=pat.length(),n=text.length();
 int i=0;
 long int hashpat=0,hashtext=0;
 while(i<m)
 {
   hashpat+=((int(pat[i])-96)*pow(prime,i));
   hashtext+=((int(text[i])-96)*pow(prime,i));
   i++;
 }
// cout<<"hastpath = "<<hashpat<<endl;
 for(int i=0,k;i<=(n-m);i++)
 {
   if(hashpat==hashtext)
   {
      for(k=0;k<m;k++)
        if(pat[k]!=text[i+k])
           break;
      if(k==m)
        cout<<"found at index: "<<i<<endl;
   }
//   cout<<"hashtext for "<<text.substr(i,m)<<" = "<<hashtext<<endl;

   int sub=(int(text[i])-96);
   hashtext-=sub;
//   cout<<"hashtext-=sub :"<<hashtext<<endl;
   hashtext/=prime;
//   cout<<"div by prime :"<<hashtext<<endl;
   int add=(int(text[i+m])-96)*pow(prime,2);
   hashtext=hashtext+add;
//   cout<<"after add :"<<hashtext<<endl;
//   cout<<"hashtext for "<<i<<" = "<<hashtext<<endl;
 }
//cout<<"\nended here";
}
 
 

int main()
{
 string pat;
 string text;
 cout<<"enter the 2 strings as pat and text\n";
 cin>>pat>>text;
 cout<<"\n the 2 strings are: \n";
 cout<<"pat = "<<pat<<endl;
 cout<<"text = "<<text<<endl;
 disp(pat,text);
 return 0;
}
