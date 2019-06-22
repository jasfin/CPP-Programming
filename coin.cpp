#include<iostream>
using namespace std;
int val=10;
int f2(int a[],int ind,int j,int n)
{
    int count=0,sum;
    for(int k=ind+1;k<n;k++)
    {
        sum=a[ind];
        if(k+j-1<n)
        {
            for(int m=k;m<k+j;m++)
               sum+=a[m];
            if(sum==val) count++;
        }
    }
    return count;

}
int f1(int a[],int ind,int n)
{
    int count=0;
    for(int j=1;j<n;j++)  //no of combinations 1,2,...n-1;
      count+=f2(a,ind,j,n);
    return count;
}

int main()
{
    int a[]={1,2,3,4,5},count=0,n=5;
    for(int i=0;i<n;i++)
       count+=f1(a,i,n);
    cout<<"\n"<<count;

}