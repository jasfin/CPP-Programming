#include<iostream>
#include<stack>
typedef struct foo foo;
using namespace std;

struct foo
{
 int data;
 foo *next;
};
foo* build(foo *);
void dispadd(foo *,foo *);
int main()
{
 foo *h1=NULL;
 h1=build(h1);
 foo *ptr=h1;
 while(ptr!=NULL)
 {
  cout<<"\t"<<ptr->data;
  ptr=ptr->next;
 }
 foo *h2=NULL;
 h2=build(h2);
 ptr=h2;
 cout<<"\n";
 while(ptr!=NULL)
 {
  cout<<"\t"<<ptr->data;
  ptr=ptr->next;
 }
 dispadd(h1,h2);
  
}

foo* build(foo *head)
{
 int ch;
 foo *nptr=new foo;
 cout<<"enter value to insert";
 cin>>nptr->data;
 if(head==NULL)
   head=nptr;
 else
 {
  nptr->next=head;
  head=nptr;
 }
 cout<<"enter 1 to stop";
 cin>>ch;
 if(ch==1)
   return head;
 build(head);
} 

void dispadd(foo *h1,foo *h2)
{
 stack<int> s;
 int ele;
 foo *ptr1=h1,*ptr2=h2;
 while(ptr1!=NULL)
 {
  s.push(ptr1->data);
  ptr1=ptr1->next;
 }
 int item1=0;
 while(s.empty()!=1)
 {
  ele=s.top();
  s.pop();
  item1=item1*10+ele;
 }
 
 while(ptr2!=NULL)
 {
  s.push(ptr2->data);
  ptr2=ptr2->next;
 }
 int item2=0;
 while(s.empty()!=1)
 {
  ele=s.top();
  s.pop();
  item2=item2*10+ele;
 }
 cout<<"\t"<<item1<<"\t"<<item2;
 
 int res=item1+item2;
 foo *h3=NULL,*temp,*nptr;
 while(res!=0)
 {
  ele=res%10;
  res=res/10;
  nptr=new foo;
  nptr->data=ele;
  if(h3==NULL)
    h3=nptr;
  else
   {
    temp=h3;
    while(temp->next!=NULL)
      temp=temp->next;
    temp->next=nptr;
   }
 }
 temp=h3;
 while(temp!=NULL)
 {
   cout<<"\t"<<temp->data;
   temp=temp->next;
 }

}
