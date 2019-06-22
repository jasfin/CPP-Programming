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

node *reverselist(node *ptr)
{
	node *prev=NULL;
	node *current=ptr;
	while(current!=NULL)
	{
		node *nextone=current->next;
		current->next=prev;
		prev=current;
		current=nextone;
	}
	return prev;
}

node *kwayreverse(node *root,int k)
{
	int count=0;
	node *prev=NULL,*current=root,*nextone;
	while(current!=NULL && count<k)
	{
		nextone=current->next;
		current->next=prev;
		prev=current;
		current=nextone;
		count++;
	}
	if(nextone!=NULL)
	  root->next=kwayreverse(nextone,k);

	return prev;
}
int main()
{
	int n;
	cin>>n;
	root=new node;
	cout<<"enter root value \n";
	cin>>root->data;
	cout<<root->data<<"hihi"<<endl;
	for(int i=0;i<n-1;i++)
	{
		int item;
		cin>>item;
		node *ptr=root,*nptr;
		while(ptr!=NULL)
		{
			nptr=ptr;
			ptr=ptr->next;
		}
		nptr->next=new node;
		nptr->next->data=item;
	}
	cout<<"root is "<<root->data<<endl;
	disp(root);
 	node *newroot=reverselist(root);
 	root=newroot;
    cout<<"\n after reversing:"<<endl;
    disp(root);


    //k-way reversal
    int k;
    cin>>k;
    newroot=kwayreverse(root,k);
    disp(newroot);
}