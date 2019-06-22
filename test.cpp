#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n;
    int m;
    int num=0,maxtop=0,c;
    cin >> n >> m;
    vector<string> topic(n);
    for(int topic_i = 0;topic_i < n;topic_i++){
       cin >> topic[topic_i];
    }
    for(int i=0;i<n;i++)
      for(int j=i+1;j<n;j++)
        {
          c=0;
          for(int k=0;k<m;k++)
              if(topic[i][k]==1 || topic[j][k]==1)
                   c++;
          if(c>maxtop) 
          {
            num=1;
            maxtop=c;
          }
          else if(c==maxtop)
              num++; 
        }
    cout<<maxtop<<"\n"<<num;
    return 0;
}

