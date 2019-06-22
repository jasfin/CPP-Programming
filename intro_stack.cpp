#include<iostream>
#include<stack>
using namespace std;

int main()
{
    clock_t tStart = clock();
    stack<int> s;
    s.push(2);
    s.push(4);
    //cout<<s.find(4);
    while(s.empty()!=1)
    {
      cout<<"\n"<<s.top();
       s.pop();
    }
     cout<<"Time taken:"<< (double)(clock() - tStart)/CLOCKS_PER_SEC;
    
    // cout<<"\n"<<s[0]; is invalid
}
