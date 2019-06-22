#include<bits/stdc++.h>

using namespace std;

int main()
{
  int arr[]={2,45,3,12,10};
  make_heap(arr,arr+5);
  cout<<"heap made is"<<endl;
  for(int i=0;i<5;i++)
    cout<<arr[i]<<"\t";
  pop_heap(arr,arr+5);
  cout<<"popped the largest element and pushed value 98"<<endl;
  arr[4]=98;
  push_heap(arr,arr+5);
  cout<<"after pop operation is"<<endl;
  for(int i=0;i<5;i++)
    cout<<arr[i]<<"\t";
}
