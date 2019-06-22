#include<iostream>
using namespace std;
typedef struct std1 std1;
void buildtree(std1 *);
void insert(std1 *,int);
void traverse(std1 *);
void delleaf(std1 *,int);
struct std1
{
 int data;
 std1 *lchild,*rchild;
}*parent;

int main()
{
 std1 *header=new std1;// or std *header=calloc(1,sizeof(std));
 buildtree(header);
 traverse(header);
 int *key=new int;
 cout<<"Enter value to insert again";
 cin>>*key;
 insert(header,*key);
 traverse(header);
 cout<<"enter value to be updated";
 cin>>*key;
 //std1 *parent;
 delleaf(header,*key);
 traverse(header);
}

void buildtree(std1 *ptr)
{
 int ch;
 cout<<"enter value to insert";
 cin>>ptr->data;
 cout<<"press 1 if "<< ptr->data<<"has a leftchild";
 cin>>ch;
 if(ch==1)
 {
  ptr->lchild=new std1;
  buildtree(ptr->lchild);
 }
 else
  ptr->lchild=NULL;
 
 cout<<"press 1 if "<< ptr->data<<"has a rightchild";
 cin>>ch;
 if(ch==1)
 {
  ptr->rchild=new std1;
  buildtree(ptr->rchild); 
 } 
 else 
  ptr->rchild=NULL; 
 return;
}

void traverse(std1 *ptr)
{
 if(ptr==NULL)
  return;
 cout<<"\t"<<ptr->data;
 traverse(ptr->lchild);
 traverse(ptr->rchild);
}



void insert(std1 *ptr,int key)
{
 int ch;
 if(ptr==NULL)
  return;
 
 if(ptr->data==key)
 {
  if(ptr->lchild==NULL && ptr->rchild==NULL)
  {
    cout<<"press 1 to enter as lchild and 2 to enter as rchild";
    cin>>ch;
    if(ch==1)
    {
     ptr->lchild=new std1;
     cout<<"enter value to insert";
     cin>>ptr->lchild->data;
    }
    else if(ch==2)
    {
     ptr->rchild=new std1;
     cin>>ptr->rchild->data;
    }
  }
  else
   cout<<"given node is not a leaf node";
  return;
 }
 insert(ptr->lchild,key);
 insert(ptr->rchild,key);
}

void delleaf(std1 *ptr,int key)
{
 if(ptr==NULL) return;
 if(ptr->data==key)
 {
  if(ptr->lchild==NULL && ptr->rchild==NULL)
   {
     if(parent->lchild=ptr)
       parent->lchild=NULL;
     else 
       parent->rchild=NULL;
     cout<<"deletion success";
   }
  else
   cout<<"given node is not a leaf node";
  return;
 }
 else
 {
  parent=ptr;
  delleaf(ptr->lchild,key);
  delleaf(ptr->rchild,key);
 }

}
