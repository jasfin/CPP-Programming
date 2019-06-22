//given height h, count the number of balanced binary trees of that height
#include<bits/stdc++.h>
using namespace std;
#define num 1000000007
int balancedBTs(int h) {
  /* Don't write main().
     Don't read input, it is passed as function argument.
     Return the output and don’t print it.
  */

  if(h==1 || h==0)
    return 1;
  
  int hminusoneposs=balancedBTs(h-1)%num;
  int hminustwoposs=balancedBTs(h-2)%num;
  
  int val1=(int) ( ( (long long int)hminusoneposs*hminusoneposs) %num);
  int val2=(int) ( ( (long long int)2*hminusoneposs*hminustwoposs) %num);
  
  return (int) ( ( (long long int)val1+val2) %num);
 /* return 
    ((((hminusoneposs*hminusoneposs)%num)%num + ((2*hminusoneposs*hminustwoposs)%num))%num)%num;
  
 */

}

int main()
{
 int h;
 cin>>h;
 cout<<balancedBTs(h);
}
