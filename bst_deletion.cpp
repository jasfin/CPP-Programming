#include<iostream>
using namespace std;
typedef struct ele ele;
void traverse(ele *);
void buildtree(ele *);
int insucc(ele *,int);
void deletion(ele *,int);
//typedef struct ele ele;
struct ele
{
 int data;
 ele *lchild,*rchild;
};

int main()
{
 ele *root=new ele;
 cout<<"enter root value";
 cin>>root->data;
 //cout<<root->data;
 //cout<<"\n"<<root->rchild<<"\t"<<root->lchild;
 buildtree(root);
 traverse(root);
 int item;
 cout<<"Enter value to find its inorder succ";
 cin>>item;
 cout<<insucc(root,item);
 cout<<"enter value to be deleted";
 cin>>item;
 deletion(root,item);
 traverse(root);
}

void buildtree(ele *ptr)
{
 int item;
 cout<<"enter next element to be added";
 cin>>item;
 ele *nptr=ptr,*nnptr;
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
  
 }

 if(nptr!=NULL)
   cout<<"item already present";
 else
 {
  nptr=new ele;
  nptr->data=item;
  if(item>nnptr->data)
    nnptr->rchild=nptr;
  else
    nnptr->lchild=nptr;
 }
 cout<<"press 1 to enter more";
 cin>>item;
 if(item==1)
  buildtree(ptr);
}

void traverse(ele *ptr)
{
 if(ptr==NULL)
  return;
 traverse(ptr->lchild);
 cout<<ptr->data<<"\t";
 traverse(ptr->rchild);
}

int insucc(ele *ptr,int item)
{
 ele *nptr=ptr;
 while(nptr->data!=item && nptr!=NULL)
 {
  if(item>nptr->data)
   nptr=nptr->rchild;
  else if(item<nptr->data)
   nptr=nptr->lchild;
 }
 if(nptr==NULL)
 {
   cout<<"element not found";
   return 0;
 }
 ele *minptr,*resptr;
 if(nptr->rchild!=NULL)
 {
   minptr=nptr->rchild;
   while(minptr!=NULL)
   {
    resptr=minptr;
    minptr=minptr->lchild;
   }
   return resptr->data;
 }
 else
 {
  nptr=ptr;
  while(nptr!=NULL)
  {
   if(nptr->data>item)
   {
    resptr=nptr;
    nptr=nptr->lchild;
   }
   else if(nptr->data<item)
    nptr=nptr->rchild;
   else
    break;
  }
  return resptr->data;
 }
}
  


void deletion(ele *root,int item)
{
 ele *ptr=root,*pptr;
 while(ptr!=NULL && ptr->data!=item)
 {
   if(item>ptr->data)
   {
    pptr=ptr;
    ptr=ptr->rchild;
   }  
   else
   {
    pptr=ptr;
    ptr=ptr->lchild;
   }
 }

 if(ptr==NULL)
 {
  cout<<"element not found";
  return;
 }
 
 //case 1: leaf node
  if(ptr->rchild==NULL && ptr->lchild==NULL)
  {
   if(pptr->rchild==ptr)
    pptr->rchild=NULL;
   else
    pptr->lchild=NULL;
  }
 //case 2: 1 child exists

  else if(ptr->rchild!=NULL && ptr->lchild==NULL)
  {
   if(pptr->rchild==ptr)
      pptr->rchild=ptr->rchild;
   else
      pptr->lchild=ptr->rchild;
  }
  else if(ptr->lchild!=NULL && ptr->rchild==NULL)
  {
    if(pptr->rchild==ptr)
     pptr->rchild=ptr->lchild;
    else
     pptr->lchild=ptr->lchild;
  }

 //case 3: both the children exist..use inorder successor method,ie;replace the item to be deleted by the inorder successor

 else if(ptr->rchild!=NULL && ptr->lchild!=NULL)
 {
  int insuc=insucc(root,ptr->data);
  //ptr->data=insuc;
  deletion(root,insuc);
  ptr->data=insuc;
 }
}
