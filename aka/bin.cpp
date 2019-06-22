#include<bits/stdc++.h>
 
using namespace std;
typedef struct node node;
void build(node *);
struct node
{
  int data;
  node *left,*right;
};


int main()
{
  node *root=new node;
  build(root);
}

void build(node *ptr)
{
  int ch;
  cout<<"enter data";
  cin>>ptr->data;
  cout<<"hit 1 if "<<ptr->data<<"has a left child"<<endl;
  cin>>ch;
  if(ch==1)
  {
    ptr->left=new node;
    build(ptr->left);
  }

  cout<<"hit 1 if "<<ptr->data<<"has a right child"<<endl;
  cin>>ch;
  if(ch==1)
  {
    ptr->right=new node;
    build(ptr->right);
  }
}
