//display maximum height of a tree

#include<bits/stdc++.h>

using namespace std;
typedef struct node node;
struct node
{
  int data;
  node *left,*right;
};

void maketree(node *root)
{
  int ch;
  node *ptr=root,*nptr;
  int item;
  cout<<"enter value to insert";
  cin>>item;
  while(ptr!=NULL)
  {
    nptr=ptr;
    if(item>ptr->data)
      ptr=ptr->right;
    else if(item<ptr->data)
      ptr=ptr->left;    
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
   cout<<"duplicate entry not allowed";
  cout<<"press 1 to enter more";
  cin>>ch; 
  if(ch==1)
     maketree(root);
}

void inordertraverse(node *ptr)
{
   if(ptr==NULL)
     return;
   inordertraverse(ptr->left);
   cout<<ptr->data<<"\t";
   inordertraverse(ptr->right);
}
map<int,int> m;
int maxhgt(node *root)
{
  if(root==NULL)
     return -1;
  
  int lhgt=1+maxhgt(root->left);
  int rhgt=1+maxhgt(root->right);
  /*m[root->data]=max(lhgt,rhgt);  use this to display max height and individual hgts
   return max(lhgt,rhgt); */
  if(lhgt==-10 || rhgt==-10)
      return -10;
  if(abs(lhgt-rhgt)>1)
  {
     cout<<"not balanced";
     return -10;
  }
}



int main()
{
  node *root=new node;
  cout<<"enter root value"<<endl;
  cin>>root->data;
  maketree(root);
  inordertraverse(root);
  cout<<"maximum height is: "<<maxhgt(root);
  for(auto it=m.begin();it!=m.end();it++)
     cout<<it->first<<":"<<it->second<<endl;
}
