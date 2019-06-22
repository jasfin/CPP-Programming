#include<iostream>
#include<queue>
using namespace std;

int main()
{
    queue<int> q;
    q.push(10);
    q.push(2);
    q.push(4);
    q.pop();
    cout<<"front"<<q.front();
    cout<<"back"<<q.back();
    cout<<"size"<<q.size();
    
}