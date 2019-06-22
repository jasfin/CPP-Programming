/*

#include<iostream>

using namespace std;

int main()
{
 for(int c=0;c<3;c++)
  for(int j=0;j<3;j++)
   for(int k=c;k<c+3;k++)
     for(int l=j;l<j+3;l++)
       cout<<k<<"\t"<<l<<"\n";
}

*/

// https://www.hackerrank.com/challenges/30-2d-arrays/problem


#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
using namespace std;


int main(){
    vector< vector<int> > arr(6,vector<int>(6));
    for(int arr_i = 0;arr_i < 6;arr_i++){
       for(int arr_j = 0;arr_j < 6;arr_j++){
          cin >> arr[arr_i][arr_j];
       }
    }
    
    int gsum=-100;
    for(int c=0;c<=3;c++)
    {
        for(int j=0;j<=3;j++)
        {
            int count=0,sum=0;
            for(int k=c;k<c+3;k++)
            {
                for(int l=j;l<j+3;l++)
                {
                    if(count!=3 && count!=5)
                    {//cout<<arr[k][l]<<"\t";
                      sum+=arr[k][l];}
                    count++;                    
                }
               // cout<<"\n";
            }
            if(sum>gsum) gsum=sum;
        //    cout<<"\t\t";
        }
      //  cout<<"\n\n";
    }
    
    
    cout<<gsum;
    return 0;
}

