#include<bits/stdc++.h>

using namespace std;

bool binsearch(int *arr,int low,int high,int item)
{
  if(low>high)
   return false;

  int mid=(low+high)/2;
  if(arr[mid]==item)
     return true;

  if(item>arr[mid])
   return binsearch(arr,mid+1,high,item);
  return binsearch(arr,low,mid-1,item);
}

int main()
{
  vector<int> v{1,2,33,22,43,1};
  int arr[]={2,3,4,5};
  if(binary_search(arr,arr+6,2))
    cout<<"found 2 in array";
  else
    cout<<"not found";

  cout<<endl;
  sort(v.begin(),v.end());
  if(binary_search(v.begin(),v.end(),22))
       cout<<"found 22 in vector";
  else
      cout<<"not found";
  
  cout<<endl<<endl;
  cout<<binsearch(arr,0,3,99);

}
