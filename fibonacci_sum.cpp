//express a given positive number as sum of non consecutive fibonacci numbers....this is zeckendorf's theorem...eg: 10=8+2, 30=21+8+1


#include<bits/stdc++.h>

using namespace std;

int fib(int n)
{
  if(n==1)
    return 1;

  int arr[100];
  arr[0]=1;
  arr[1]=1;
  int i=1;
  while(arr[i]+arr[i-1]<=n)
    arr[++i]=arr[i-1]+arr[i-2];
 
  return arr[i];
}


int main()
{
 int n;
 cin>>n;
/* int arr[100];
 arr[0]=1;
 arr[1]=1;
 int i=1;
 while(arr[i]+arr[i-1]<=n)
    arr[++i]=arr[i-1]+arr[i-2];
 
 cout<<arr[i];
 */

 while(n>=1)
 {
    int temp=fib(n);
    cout<<temp<<" ";
    n-=temp;
 }

}
