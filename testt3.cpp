#include <cmath>
#include <map>
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
            ptr->lchild=nptr;
        }
        if(b!=-1)
        {
            nptr=new emp;
            nptr->data=b;
            m[b]=nptr;
            ptr->rchild=nptr;
        }
    }
   
    ptr=m[1];
    inorder(ptr);

}


void inorder(emp *ptr)
{
 if(ptr==NULL)
   return;
 inorder(ptr->lchild);
 cout<<ptr->data<<"\t";
 inorder(ptr->rchild);
}
    
