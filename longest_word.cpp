#include <iostream>
#include <sstream>
#include <cstring>
using namespace std;

string LongestWord(string sen) { 

  // code goes here
  char sub[100],res[100];
  int count=0,max=0;
  istringstream ss(sen);
  while(ss)
   {
       ss>>sub;
       count=strlen(sub);
       if(count>max)
       {
         max=count;
         strcpy(res,sub);
       }
       count=0;
   }
  return res; 
            
}

int main() { 
  
  // keep this function call here
  char p[]="letter after letter!!";
  cout << LongestWord(p);
  return 0;
    
}
