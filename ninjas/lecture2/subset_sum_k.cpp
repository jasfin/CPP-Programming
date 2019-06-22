  
#include<bits/stdc++.h>
using namespace std;

void subset(int input[],int ind,int n,int k,vector<int> v,int sum)
{
  if(ind==n)
  {
    if(sum==k)
    {
      for(int i=0;i<v.size();i++)
        cout<<v[i]<<" ";
      cout<<endl;
    }

    return;
  }
 
  subset(input,ind+1,n,k,v,sum);
  v.push_back(input[ind]);
  sum+=input[ind];
  subset(input,ind+1,n,k,v,sum);
}

void printSubsetSumToK(int input[], int size, int k) {
    // Write your code here
   
    int ind=0,sum=0;
    vector<int> v;
    subset(input,ind,size,k,v,sum);
  
}

int main()
{
 int n;
 cin>>n;
 int *input=new int[n];
 for(int i=0;i<n;i++)
    cin>>input[i];
 printSubsetSumToK(input,n,3);
}
