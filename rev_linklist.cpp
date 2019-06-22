#include<iostream>
using namespace std;
typedef struct emp emp;
struct emp
{
 int data;
 emp *link;
};

int main()
{
 emp *header=new emp,*nptr,*ptr;
 int item;
 cout<<"Enter header value";
 cin>>header->data;
 int ch=1;
 while(1)
 {
  cout<<"enter value to enter";
  ptr=new emp;
  cin>>ptr->data;
  nptr=header;
  while(nptr->link!=NULL)
    nptr=nptr->link;
  nptr->link=ptr;
  cout<<"press 1 to enter more";
  cin>>ch;
  if(ch!=1)
   break;
 }
 ptr=header;
 while(ptr!=NULL)
 {
  cout<<ptr->data<<"\t";
  ptr=ptr->link;
 }
 
 ptr=header;
 emp *nheader=new emp;
 while(ptr!=NULL)
 {
  item=ptr->data;
  ptr=ptr->link;
  nptr=new emp;
  nptr->data=item;

  //if(nheader->link==NULL)
  //  nheader->link=nptr;
 // else
 // {
   nptr->link=nheader->link;
   nheader->link=nptr;
 // }
 }
  cout<<"\nreversed list is \n";
  ptr=nheader->link;
  while(ptr!=NULL)
  {
   cout<<ptr->data<<"\t";
   ptr=ptr->link;
  }
}
