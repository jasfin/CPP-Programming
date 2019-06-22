// swap nodes(40 points): https://www.hackerrank.com/challenges/swap-nodes-algo/problem
#include<map>
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
typedef struct emp emp;
void inorder(emp *);
struct emp
{
    int data;
    emp *lchild,*rchild;    
}*root;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n,a,b;
    map<int,emp*> m;
    map<int,int> d;
    emp *ptr,*nptr;
    root=new emp;
    root->data=1;
    m[1]=root;
    d[1]=1;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a>>b;
        ptr=m[i];
        if(a!=-1)
        {
            nptr=new emp;
            nptr->data=a;
            m[a]=nptr;
            d[a]=d[i]+1;
            ptr->lchild=nptr;
        }
        if(b!=-1)
        {
            nptr=new emp;
            nptr->data=b;
            m[b]=nptr;
            d[b]=d[i]+1;
            ptr->rchild=nptr;
        }
    }
    
    int ind,t,k,maxd=d[n];
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>k;
        //ind=1;
        for(int j=k;j<maxd;j+=k)
        {
            for(ind=1;ind<=n;ind++)
                if(d[ind]==j)
                {
                    ptr=m[ind];
                    nptr=ptr->lchild;
                    ptr->lchild=ptr->rchild;
                    ptr->rchild=nptr;                    
                }
        }
        inorder(m[1]);
        cout<<"\n";
    }
}

void inorder(emp *ptr)
{
    if(ptr==NULL)
        return;
    inorder(ptr->lchild);
    cout<<ptr->data<<" ";
    inorder(ptr->rchild);
}
            
            
   
