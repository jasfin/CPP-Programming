//to find the index of an element in the array...if element is not present in the array,index of the next higher element is returned (for lower bound)
//for upper bound the index of element that is next larger is returned..for eg: 1,2,3,3,4; upperbound of 3 is 4
#include<bits/stdc++.h>
using namespace std;

int main()
{
 int arr[]={3,2,1,3,44,54,23,12,78};
 sort(arr,arr+9); 
 for(int i=0;i<9;i++)
    cout<<arr[i]<<"\t";
 cout<<endl;
 cout<<"lower bound and upper bound of 3 are as follows"<<endl;
 cout<<lower_bound(arr,arr+9,3)-arr<<endl;  //subraction is used because lower_bound returns the pointer to that location..
 cout<<upper_bound(arr,arr+9,3)-arr;
}
