#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
	//code
	int T,n,item;
	vector<int> v,pos,neg;
	cin>>T;
	for(int i=0;i<T;i++)
	{
	    cin>>n;
	    for(int j=0;j<n;j++)
	    {  cin>>item;
	       v.push_back(item);
            }
            for(int m=0;m<n;m++)
               cout<<v[m]<<" ";

	    for(int k=0;k<n-1;k++)
	      for(int l=k+1;l<n;l++)
	      {
	          if(v[k]==(0-v[l]))
	          {
	              if(v[l]>0)
	              {
	                  pos.push_back(v[l]);
	                  neg.push_back(v[k]);
	              }
	              else
	              {
	                  pos.push_back(v[k]);
	                  neg.push_back(v[l]);
	              }
	              break;
	          }     
	      }
	sort(pos.begin(),pos.end());
	sort(neg.begin(),neg.end());
	for(int i=0;i<pos.size();i++)
	  cout<<0-pos[i]<<" "<<pos[i];
	cout<<"\n";
	 
	v.clear();
        pos.clear();
	neg.clear();
	}
	
	return 0;
}
