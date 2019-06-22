
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int show(vector<int> a)   //use &a for modifications to have effect everywhere
{
    a[0]=0;
    cout<<"\n\n"<<a[0];
}

int main()
{
  vector<int> v;
  cout<<"\n enter elements";
  int ch=1,i;
  while(ch==1)
  {
    cout<<"\n enter now";
    cin>>i;
    v.push_back(i);
    cout<<"\n enter 1 to continue";
    cin>>ch;

  }
  for(int i=0;i<v.size();i++)
     cout<<"\t"<<v[i];
  show(v);
  cout<<"\n"<<v[0];
  vector<int>::iterator it;
  it=find(v.begin(),v.end(),25);
  if(it!=v.end())
    cout<<"element is present";
  else
    cout<<"element is not present";
 


}
