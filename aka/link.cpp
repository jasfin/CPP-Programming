#include<bits/stdc++.h>

using namespace std;
typedef struct node node;
struct node
{
  int data;
  node *link;
};


int main()
{
 node *header=new node;
 cout<<"enter header value";
 cin>>header->data;
 while(1)
 {
   cout<<"enter value"<<endl;
   node *ptr=new node;
   cin>>ptr->data;
   node *nptr=header;
   while(nptr->link!=NULL)
      nptr=nptr->link;
   nptr->link=ptr;
   int ch;
   cout<<"enter 1 to enter more";
   cin>>ch;
   if(ch!=1)
      break;
 }

 cout<<"Entered list is"<<endl;
 node *ptr=header;
 while(ptr!=NULL)
 {
   cout<<ptr->data<<"\t";
   ptr=ptr->link;
 }
 
 node *nhead=NULL;
 ptr=header;
 while(ptr!=NULL)
 {
   node *nptr=new node;
   nptr->data=ptr->data;
   nptr->link=nhead;
   nhead=nptr;
   ptr=ptr->link;
 }
 cout<<endl;
 ptr=nhead;
 while(ptr!=NULL)
 {
   cout<<ptr->data<<"\t";
   ptr=ptr->link;
 }

 
}
