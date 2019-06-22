#include <iostream>
#include<vector>
#include<algorithm>
#include<set>
using namespace std;

int main() {
	//code
	int T,n,item;
	vector<int> v;
	set<int> s;
	set<int>::iterator it;
	cin>>T;
	for(int i=0;i<T;i++)
	{
	    cin>>n;
	    for(int j=0;j<n;j++)
	    {
	        cin>>item;
	        v.push_back(item);
	    }
	    
	    for(int k=0;k<n;k++)
	    {     
	          item=v[k];
	          if(find(v.begin(),v.end(),0-item)!=v.end())
	          {
	              if(item>0)
	                s.insert(item);
	              else
	                s.insert(0-item);
	          }     
	    }
	    
	for(it=s.begin();it!=s.end();it++)
	  cout<<0-*it<<" "<<*it;
	cout<<"\n";
	v.clear();
	
   }
	
	return 0;
}
