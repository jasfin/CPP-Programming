//area of a triangle

#include<bits/stdc++.h>
using namespace std;

int main(int argc,char **argv)
{
 int base=0;
 for(int i=0;argv[1][i]!='\0';i++)
   base=base*10+(argv[1][i]-'0');
 int height=0;
 for(int i=0;argv[2][i]!='\0';i++)
   height=height*10+(argv[2][i]-'0');
 float res=(float)base*height*0.5;
 cout<<fixed<<setprecision(2)<<res;
}
