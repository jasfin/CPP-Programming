#include<iostream>
typedef struct emp emp;
using namespace std;

void buildtree(emp *);
void traverse(emp *);
struct emp
{
 int data;
 emp *rchild,*lchild;
};

int main()
{
 emp *root=new emp;
 cout<<"enter root value";
 cin>>root->data;
 root->rchild=NULL;
 root->lchild=NULL;
 buildtree(root);
 traverse(root);
}


void buildtree(emp *root)
{
 int ch=1;
 emp *ptr=new emp;
 cout<<"enter value to insert";
 cin>>ptr->data;
 int item=ptr->data;
 emp *nptr=root,*nnptr;
 while(nptr!=NULL)
 {
   if(item>nptr->data)
   {
    nnptr=nptr;
    nptr=nptr->rchild;
   }
   else if(item<nptr->data)
   {
    nnptr=nptr;
    nptr=nptr->lchild;
   } 
   else 
    {
     cout<<"item already present";
     break;
    }
 }
 if(nptr==NULL)
 {
   if(item>nnptr->data)
      nnptr->rchild=ptr;
   else
      nnptr->lchild=ptr;
 }

 cout<<"press 1 to enter more";
 cin>>ch;
 if(ch==1)
   buildtree(root);
}


void traverse(emp *ptr)
{
  if(ptr==NULL)
     return;
  else
  {
    traverse(ptr->lchild);
    cout<<"\t"<<ptr->data;
    traverse(ptr->rchild);
  }
}
