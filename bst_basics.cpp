#include<iostream>
using namespace std;
typedef struct std1 std1;
void insertbin(std1 *);
void traverse(std1 *);
int findmin(std1 *);
void insucc(std1 *,int);
struct std1
{
 int data;
 std1 *lchild,*rchild;
};
 

int main()
{
 std1 *root=new std1;
 int item;
 cout<<"Enter root value";
 cin>>root->data;
 insertbin(root);
 traverse(root);
/* cout<<"enter value to find inorder successor"; case 1:if ri8 subtree exist, find min of ri8 subtree, else traverse the tree
                                                         to find verynext max of item(if parent pointer isnt given)
                                                         else traverse up from item with parent pointer to find first node that is
							 left child of its parent*/
               
 //cin>>item;
// insucc(root,item);
}

void insertbin(std1 *root)
{
 std1 *ptr=root,*nptr;
 int item,ch;
 char flag='t';
 cout<<"Enter value to enter";
 cin>>item;
 while(flag=='t' && ptr!=NULL)
 {
  if(item>ptr->data)
  {
    nptr=ptr;
    ptr=ptr->rchild;
  }
  else if(item<ptr->data)
  {
    nptr=ptr;
    ptr=ptr->lchild;
  }
  else if(item==ptr->data)
    flag='f';
 }

 if(flag=='f')
  cout<<"item is already in the tree";
 else
 {
   ptr=new std1;
   ptr->data=item;
   if(item>nptr->data)
    nptr->rchild=ptr;
   else
    nptr->lchild=ptr;
 }
 cout<<"press 1 to continue";
 cin>>ch;
 if(ch==1)
   insertbin(root);
}

void traverse(std1 *root)
{
 if(root==NULL)
  return;
 traverse(root->lchild);
 cout<<root->data<<"\t";
 traverse(root->rchild);
}

//error bcs ptr should refer to node item and not to root for the first if condition
// in else part ptr should refer to root
void insucc(std1 *ptr,int item)
{
 int res;
 if(ptr->rchild!=NULL)
  {
   cout<<findmin(ptr->rchild);
   return;
  }
 else
 {
   while(ptr!=NULL)    
   {
    if(ptr->data>item)
    {
     res=ptr->data;
     ptr=ptr->lchild;
    }
    else if(ptr->data<item)
     ptr=ptr->rchild;
    else
     break;
   }
 }
 cout<<res;
}
 

int findmin(std1 *ptr)
{
 std1 *nptr; 
 while(ptr!=NULL)
 {
  nptr=ptr;
  ptr=ptr->lchild;
 }
 return nptr->data;
}
