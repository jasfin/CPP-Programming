#include<bits/stdc++.h>

using namespace std;

int main()
{
 int arr[10000];
 int n;
 cin>>n;
 arr[0]=1;
 int carry,len=1;
 
 for(int i=2;i<=n;i++)
 {
   carry=0;
   for(int j=0;j<len;j++)
   {
      int temp=arr[j]*i+carry;
      arr[j]=temp%10;
      carry=temp/10;
   }

   while(carry)
   {
   //  len++;
     arr[len++]=carry%10;
     carry/=10;
   }
 }

 for(int i=len-1;i>=0;i--)
     cout<<arr[i];
}
      
