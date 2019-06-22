#include<bits/stdc++.h>
using namespace std;

int main(int argc,char **argv)
{
 cout<<"arg nums = "<<argc<<endl;
 for(int i=0;i<argc;i++)
    cout<<argv[i]<<" ";

 cout<<endl;
 int num=0;
 char *p=argv[1];
 for(int i=0;p[i]!='\0';i++)
    num=num*10+(p[i]-'0');
cout<<endl;
// cout<<p;
 cout<<"strlen(argv[1] is "<<strlen(argv[1])<<endl;
 cout<<num<<endl;


}
