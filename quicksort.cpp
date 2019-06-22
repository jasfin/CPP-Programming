#include<bits/stdc++.h>

using namespace std;

void quicksort(int *a,int first,int last)
{
 if(first>=last)
   return;

 int left=first,right=last,pivot=a[first];
 while(left!=right)
   if(pivot==a[left])
   {
     if(a[right]<pivot)
     {
        swap(a[right],a[left]);
        left++;
     }
     else
        right--;
   }
   else  //pivot = a[right]
   {
     if(a[left]>pivot)
     {
       swap(a[left],a[right]);
       right--;
     }
     else
       left++;
   }
 quicksort(a,first,left-1);
 quicksort(a,left+1,last);
}

int main()
{
 int n;
 cin>>n;
 int *arr=new int[n];
 for(int i=0;i<n;i++)
   cin>>arr[i];
 for(int i=0;i<n;i++)
   cout<<arr[i];
 cout<<endl;
 quicksort(arr,0,n-1);
 for(int i=0;i<n;i++)
   cout<<arr[i]<<"\t";
}
