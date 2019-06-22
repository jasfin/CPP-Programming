#include<bits/stdc++.h>

using namespace std;
void f(int,short){}
int main()
{
 int i=100;
 short s=12;
 short *p=&s;
 f(i,*p);
}
