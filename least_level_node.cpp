#include<iostream>
#include<iomanip>
#include<cstdlib>
typedef struct ele ele;
using namespace std;

void build(ele *ptr);
void display(ele *);

struct ele
{
    int data;
    ele *lchild,*rchild;
}*root;

int main()
{
  char ch='y';
  root=new ele;
  build(root);
  display(root);
  

}

void build(ele *ptr)
{
    int ch=0;
    cout<<"enter data";
    cin>>ptr->data;
    cout<<"press 1 if"<<ptr->data<<"has a left child";
    cin>>ch;
    if(ch==1)
    {        
      ptr->lchild=new ele;
      build(ptr->lchild);
    }
      cout<<"press 1 if"<<ptr->data<<"has a right child";
      cin>>ch;
      if(ch==1)
      {
        ptr->rchild=new ele;
        build(ptr->rchild);
      }
}
        

void display(ele *ptr)
{
    if(ptr==NULL) return;
    cout<<ptr->data<<"\t";
    display(ptr->lchild);
    display(ptr->rchild);
}