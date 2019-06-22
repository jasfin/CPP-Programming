#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include<map>
#include<string>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    map<int,int> m;
    int val;
    string s;
    for(int i=97;i<=122;i++)
      m.insert(make_pair(i,0));
    getline(cin,s);
    for(int i=0;s[i]!='\0';i++)
    {
        val=int(s[i]);
        if(val>=65 && val<=90) 
            val+=32;
        if(val>=97 && val<=122)
            m.at(val)=1;
    }
    int i;
    for(i=97;i<=122;i++)
        if(m.at(i)!=1) 
            break;
    if(i<=122)
        cout<<"not pangram";
    else
        cout<<"pangram";
      
    return 0;
}
