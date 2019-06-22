//check if a tree is balanced, ie; height of right and left subtrees differ by at most 1

#include<iostream>
#include<cstdlib>
using namespace std;
typedef struct node node;
void checkhgt(node *);
int hgt(node *,char);
struct node
{
 int data;
 node *left,*right;
};

void inordertraverse(node *root)
{
 if(root==NULL)
  return;
 inordertraverse(root->left);
 cout<<root->data<<"\t";
 inordertraverse(root->right);
}

void buildtree(node *root)
{
 char ch='y';
 int item;
 cout<<"enter value of item to be inserted";
 cin>>item;
 node *ptr=root,*nptr;
 //char flag='t';
 while(ptr!=NULL)
 {
   if(item>ptr->data)
   {
    nptr=ptr;
    ptr=ptr->right;
   }
   else if(item<ptr->data)
   {
    nptr=ptr;
    ptr=ptr->left;
   }
   else
    break;
  
 }
 if(ptr==NULL)
 {
  ptr=new node;
  ptr->data=item;
  if(item>nptr->data)
   nptr->right=ptr;
  else
   nptr->left=ptr;
 }
 else
 {
   cout<<"item already present";
 }
 
 cout<<"press y to enter more";
 cin>>ch;
// ch=='y'?buildtree(root):break;
 if(ch=='y')
    buildtree(root);
}

int che=1;

int main()
{
 node *root=new node;
 cout<<"enter root value";
 cin>>root->data;
 buildtree(root);
 inordertraverse(root);
 checkhgt(root);
 che==0?cout<<"not balanced":cout<<"balanced";

}

void checkhgt(node *ptr)
{
  if(ptr==NULL)
     return;
  if(abs(hgt(ptr,'l')-hgt(ptr,'r'))>1)
     {
       //cout<<"not balanced";
       che=0;
       return;
     }
  checkhgt(ptr->left);
  checkhgt(ptr->right);
}

int hgt(node *ptr,char ch)
{
  int count=0;
  if(ch=='l')
  {
    while(ptr->left!=NULL)
    {
     count++;
     ptr=ptr->left;
    }
    return count;
  }
  else
  {
    while(ptr->right!=NULL)
    {
     count++;
     ptr=ptr->right;
    }
    return count;
  }
}
