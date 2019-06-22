#include<iostream>
#include<map>

using namespace std;
long long int findchange(int,int,long long int [][251]);
int arr[51];
int main()
{
 int c,tot;
 cin>>tot>>c;    //input the amount tot to make and number of different denominations available
 arr[0]=0;               //a base condition
 for(int i=1;i<=c;i++)
   cin>>arr[i];                //input the denominations available into array arr
 long long int res[c+1][251];
 for(int i=0;i<=c;i++)
  for(int j=0;j<=tot;j++)
    res[i][j]=-1;                  //memoization matrix set to -1
 cout<<findchange(c,tot,res);
}

long long int findchange(int c,int tot,long long int res[][251])
{
 
 if(res[c][tot]>=0)          //if already in matrix,just return that value
    return res[c][tot];
 if(arr[c]==0 && tot==0)     //if coin value is zero and amount to make is zero , return 1
 {  
    res[c][tot]=1;
    return 1;
 }
 if(arr[c]==0 && tot!=0)     //if coin value is zero and amount to make is greater than zero, return 0
 {
    res[c][tot]=0;
    return 0;
 }
 if(arr[c]>tot)             //if coin chosen is greater than the amount tot to make, choose no. of ways as (no. of ways with the just lesser denominatioin-predecessor coin)
  {
    res[c][tot]=findchange(c-1,tot,res); 
    return res[c][tot];
  }
 
  res[c][tot]=findchange(c-1,tot,res)+findchange(c,tot-arr[c],res); //else, take no. of ways as: ways without this coin + ways with this coin added
  return res[c][tot];  
  
} 




