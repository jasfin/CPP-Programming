#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
 int n;
 cout<<"enter n";
 cin>>n;
 int arr[n];
 
 cout<<"Enter elements";
 for(int i=0;i<=n-2;i++)
   cin>>arr[i];
 sort(arr,arr+n-1);
 cout<<"\n\n";
 for(int i=0;i<=n-2;i++)
   cout<<arr[i]<<"\t";
 cout<<"\n";
 int item;
 cin>>item;
 int i;
 for(i=0;i<=n-2;i++)
     if(item<=arr[i])
        break;
 for(int j=n-2;j>=i;j--)
     arr[j+1]=arr[j];
 arr[i]=item;

 cout<<"\n";
 for(int i=0;i<n;i++)
   cout<<arr[i]<<"\t";
}
 
