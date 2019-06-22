#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter array size";
    cin>>n;
    int *arr=new int[n];
    cout<<"enter elements";
    for(int i=0;i<n;i++)
      cin>>arr[i];
    int i,start=0,end=0,starttemp=0,endtemp=0;
    for(i=0;i<n;i++)
    {
        
        starttemp=i;
        while(1)
          if(arr[i+1]>arr[i] && i<n)
         {
            i++;
            endtemp=i;
         }
          else
            break;
        if((endtemp-starttemp)>(end-start))
           {
               start=starttemp;
               end=endtemp;
           }   
    }
    cout<<"\n"<<end-start+1;
}