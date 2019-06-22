#include<bits/stdc++.h>
using namespace std;

int main()
{
 int n;
 cin>>n;
 vector<int> arr(n);
 for(int i=0;i<n;i++)
   cin>>arr[i];
 make_heap(arr.begin(),arr.end(),greater<int> ());
 cout<<endl;
 cout<<"the heap is "<<endl;
 for(int i=0;i<n;i++)
   cout<<arr[i]<<"\t";
 cout<<endl;
 for(int i=0;i<n;i++)
 {
    cout<<arr[0]<<endl;
    pop_heap(arr.begin(),arr.end(),greater<int> ());
    arr.pop_back();
 }

}

