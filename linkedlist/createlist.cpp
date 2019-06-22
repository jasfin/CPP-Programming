#include<bits/stdc++.h>
using namespace std;
typedef struct node node;

struct node
{
 int data;
 node *next;
}*root;

void disp(node *ptr)
{
   while(ptr!=NULL)
   {
      cout<<ptr->data<<"\t";
      ptr=ptr->next;
   }
}

int main()
{
  int n;
  cin>>n; 
  node *ptr;
  for(int i=0;i<n;i++)
  {
    int item;
    cin>>item;
    if(root==NULL)
    {
  	root=new node;
        root->data=item;
    }    
    else
    {  /*
        ptr=root;             //insertion at the end
        while(ptr->next!=NULL)
        	ptr=ptr->next;
        ptr->next=new node;
        ptr->next->data=item;
      */
       ptr=new node;
       ptr->data=item;
       ptr->next=root->next; //insertion at the beginning
       root->next=ptr;
    }
   }
   
   disp(root);

   //delete a node
   int delitem;
   cout<<"enter node to delete \n";
   cin>>delitem;
   if(root->data==delitem)
   {
     node *delnode=root;
     root=root->next;
     delete delnode;
   }
   else
   {
     ptr=root;
     node *nptr;
     while(ptr!=NULL && ptr->data!=delitem)
     {
        nptr=ptr;
        ptr=ptr->next;
     }
     if(ptr==NULL)
       cout<<"item not present \n";
     else
     {
        nptr->next=ptr->next;
        delete ptr;
     }
   }
   disp(root);
}

