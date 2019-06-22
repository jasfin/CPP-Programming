#include <time.h>
#include<iostream>
using namespace std;
int main()
{
 cout<<"\n this is to display execution time";
 clock_t start = clock();
 //write code from here..
 long int i=1,j=1,k=1;
 while(i<=10000000)
 { 
   i++;
   while(j<=10000000)
   {
     j++;
     while(k<=10000000)
    {
       k++; cout<<"a";

      
    }
   }
 }
 
 clock_t end=clock();   
 cout<<"\n Time taken:"<<end-start;
    return 0;
 
}
