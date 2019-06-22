#include<bits/stdc++.h>

using namespace std;
// 1 11 21 1211 111221
//21 to 12      
int next(int a)
{
  int b[100],len=0,sum;  
  while(a!=0)
  {
    b[len++]=a%10;
    a/=10;
  }
/*  cout<<"b is \n";
  for(int i=len-1;i>=0;i--)
     cout<<b[i]<<" ";
  */
  sum=0;
  for(int i=len-1,j;i>=0;i--)
  {
    //sum=0;
    int temp=i;
    int count=1;
    for(j=i-1;j>=0;j--)
    {
       if(b[i]==b[j])
         count++;
       else
       {
        // i=j+1;
         break;
       }
    }
    i=j+1;
    sum=sum*10+count;
    sum=sum*10+b[temp];
    if(j==-1)
      break;
  }//1121   

//  return sum;
 // cout<<"sum = "<<sum<<"\n";
  return sum;
}   

int main()
{
 int n;
 cout<<"enter value of n";
 cin>>n;
 int arr[100];
 arr[0]=1;
 arr[1]=11;
 for(int i=2;i<n;i++)
 {
   int item=next(arr[i-1]);
   arr[i]=item;
 }

 for(int i=0;i<n;i++)
    cout<<arr[i]<<"\n";
}
