#include<bits/stdc++.h>

using namespace std;

int main()
{
 int n;
 cin>>n;
 int arr[1000]={0},len=1,mul,carry;
 arr[0]=1;
 for(int i=2;i<=n;i++)
 {
   int carry=0;
   for(int j=0;j<len;j++)
   {
     mul=i*arr[j]+carry;
     arr[j]=mul%10;
     carry=mul/10;
   }
   while(carry)
   {
     
     arr[len++]=carry%10;
     carry/=10;
   }
 }
 
 len--;
 for(;len>=0;len--)
   cout<<arr[len];
}


