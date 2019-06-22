//reverse the string passed in the commandline
#include<bits/stdc++.h>
using namespace std;

int main(int argc,char **argv)
{
 for(int i=strlen(argv[1])-1;i>=0;i--)
   cout<<argv[1][i];
}
