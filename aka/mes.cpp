#include<bits/stdc++.h>

using namespace std;

int main()
{
  int n;
  cin>>n;
  vector<long long int> v;
  v.push_back(1);
  
  for(int i=1;i<n;i++)
  {
    long long int ele=v[i-1];
    vector<int> v1;
    while(ele!=0)
    {
      v1.push_back(ele%10);
      ele/=10;
    }
    reverse(v1.begin(),v1.end());
    long long int temp=0;
    for(int i=0,j;i<v1.size();i++)
    {
      int count=1;
      
      for( j=i+1;j<v1.size();j++)
          if(v1[i]==v1[j])
            count++;
          else
            break;
           
      temp=temp*10+count;
      temp=temp*10+v1[i];
      i=j-1;
     // v.push_back(temp);
    }
    v.push_back(temp);
    v1.clear();
  }

  for(int i=0;i<v.size();i++)
       cout<<v[i]<<"\t";
} 
      
