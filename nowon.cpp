#include<time.h>
#include<iostream>
using namespace std;
int main()
{
 clock_t beg=clock();
 int arr[]={1,2,3,4,5};
 for(int i=0;i<5;i++)
 {
  for(int j=0;j<4;j++)
  {
   for(int k=i+1;k<=(i+1+j);k++)
   {
    
    for(int l=j;l<=(i+1+k);l++)
      cout<<"\t"<<arr[l];
    cout<<"\n";
   }
  }
 }
 cout<<"\n execution time="<<(double)((clock()-beg)/CLOCKS_PER_SEC);
}
