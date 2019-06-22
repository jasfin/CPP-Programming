#include<bits/stdc++.h>

using namespace std;

int main()
{
 pair<int,int> p,k; // a single pair block...(p.first,p.second),, if a lots of such pairs are there, use a vector
 p.first=2;
 p.second=33;
 cout<<p.first<<" "<<p.second<<endl;
 k=make_pair(8,9);
 cout<<k.first<<" "<<k.second<<endl;
 swap(p,k);
}
