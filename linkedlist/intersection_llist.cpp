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
	cout<<"\n";
}
void FindIntersection(node *ptr1,node *ptr2)
{
    int count1=0;
    int count2=0;
    node *temp1=ptr1,*temp2=ptr2;
    while(temp1!=NULL)
    {
    	count1++;
    	temp1=temp1->next;
    }
    while(temp2!=NULL)
    {
    	count2++;
    	temp2=temp2->next;
    }
    
    if(count1!=count2)
    {
    	int big=(count1>count2)?1:2;
    	int d=abs(count1-count2);

    	if(big==1)
    	  for(int i=0;i<d;i++)
       		ptr1=ptr1->next;
    	else
    	  for(int i=0;i<d;i++)
    	  	ptr2=ptr2->next;
    }

    while(ptr1!=ptr2)
    	{
    		ptr1=ptr1->next;
    		ptr2=ptr2->next;
    	}
    	cout<<ptr1->data<<endl;
    return;

}

int nthfromlast(node *ptr,int n)
{
	int len=0;
	node *temp=ptr;
	while(temp!=NULL)
	{
		len++;
		temp=temp->next;
	}
    int pos=len-n;
    temp=ptr;
    for(int i=0;i<pos;i++)
       	temp=temp->next;
    return temp->data;
}

bool checkpalindrome(node *root) //check if the ll is a palindrome by revesing the
{ 								   //list from the middle
	int len=0;
	node *ptr=root,*nptr;
	while(ptr!=NULL)
	{
		len++;
		ptr=ptr->next;
	}
	cout<<"len is "<<len<<endl;
	ptr=root;
	for(int i=0;i<len/2;i++)
	{
		nptr=ptr;
		ptr=ptr->next;
    }
    nptr->next=NULL;
	node *prev=NULL,*current=ptr;

	while(current!=NULL)
	{
		node *nextone=current->next;
		current->next=prev;
		prev=current;
		current=nextone;
	}

	ptr=root;
	
	while(ptr!=NULL && prev!=NULL && ptr->data==prev->data)
	{
		cout<<ptr->data<<" is equal to "<<prev->data<<endl;
		ptr=ptr->next;
		prev=prev->next;
	}
	if(ptr==NULL)
		return true;
	return false;

}
int main()
{
	int n;
	cin>>n;
	int item;
	cin>>item;
	root=new node;
	root->data=item;
	for(int i=0;i<n-1;i++)
	{
		cin>>item;
		node *ptr=new node;
		ptr->data=item;
		ptr->next=root->next;
		root->next=ptr;
	}
	disp(root);
	if(checkpalindrome(root))      //to check if the linkedlist is a palindrome
	   cout<<"palindrome"<<endl;
	else
	   cout<<"not a palindrome"<<endl;

	//to find nth node from the end of a linkedlist;
	//int n;
	cout<<"enter n, ie;nth node from the last \n";
	cin>>n;
    cout<<"nth from last is "<<nthfromlast(root,n)<<"\n";

    //create a new intersection linkedlist to the first one
	node *ptr=new node;
	ptr->data=4400;
	ptr->next=root->next->next->next;
	disp(ptr);

	FindIntersection(root,ptr);

	


}