#include<iostream>
#include<map>
using namespace std;
int main()
{
 map<int,int> m;
 m[2]=3;
 cout<<m.at(2)<<"\n";
 m[2]=4;
 cout<<m[2];
 m.insert(make_pair(2,9));  //wont insert
 cout<<m[2];
 m.insert(pair<int,int> (2,8));
 cout<<m[2];
 cout<<m[7];
 cout<<"\n"<<m.max_size();
 m.erase(2);
 cout<<"\nat 2 is "<<m[2]<<endl;
 
// cout<<m.at(33);
// cout<<m.at(78);
 cout<<"\n\n\n";
 m[78]=77;
 cout<<m[78];
 map<int,int>::iterator it=m.find(78);
 m.erase(it);
 cout<<m[78];
}
