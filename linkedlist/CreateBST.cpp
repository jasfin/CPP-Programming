#include<bits/stdc++.h>
using namespace std;
typedef struct node node;

struct node
{
	int data;
	node *lchild,*rchild;
}*root;

void BstInsert(int item)
{
	if(root==NULL)
	{
		root=new node;
		root->data=item;
		return;
	}

	node *ptr=root,*nptr;
	while(ptr!=NULL)
	{
		nptr=ptr;
		if(item>ptr->data)
			ptr=ptr->rchild;
		else if(item<ptr->data)
			ptr=ptr->lchild;
		else
		{
			cout<<"item already present"<<endl;
			return;
		}
	}

	ptr=new node;
	ptr->data=item;
	if(item>nptr->data)
		nptr->rchild=ptr;
	else
		nptr->lchild=ptr;

}

void inorder(node *root)
{
	if(root==NULL)
		return;
	inorder(root->lchild);
	cout<<root->data<<"\t";
	inorder(root->rchild);
}

int InorderSucc(int item,node *root)
{
    node *ptr=root;
    while(ptr!=NULL && ptr->data!=item)
      	if(item>ptr->data)
    		ptr=ptr->rchild;
    	else
    		ptr=ptr->lchild;
    
    if(ptr==NULL)
    {
    	cout<<"item not present\n";
    	return -1;
    }
    
    if(ptr->rchild!=NULL)
    {
    	ptr=ptr->rchild;
    	while(ptr->lchild!=NULL)
    		ptr=ptr->lchild;
        cout<<ptr->data<<endl;
        return ptr->data;
    }
    else
    {
    	node *nptr=NULL;
    	ptr=root;
    	while(ptr->data!=item)
    	    if(item>ptr->data)
           	    ptr=ptr->rchild;
           	else
           	{
           		nptr=ptr;
           		ptr=ptr->lchild;
           	}
    	if(nptr!=NULL)
        {
        	cout<<nptr->data<<endl;
        	return nptr->data;
        }
        else
        {
        	cout<<"inorder successor doesn't exist"<<endl;
        	return -1;
        }
    }

}

void DeleteBst(int item)
{
	if(root==NULL)
		return;
	if(root->data==item && root->lchild==NULL && root->rchild==NULL)
	{
		delete root;
		root=NULL;
		return;
	}
	node *ptr=root,*nptr;
	while(ptr!=NULL && ptr->data!=item)
	{
		nptr=ptr;
		if(item>ptr->data)
			ptr=ptr->rchild;
		else
			ptr=ptr->lchild;
	}

	if(ptr==NULL)
	{
		cout<<"item not found"<<endl;
		return;
	}

	if(ptr->lchild==NULL && ptr->rchild==NULL) //case 1: leaf node
	{
		if(nptr->lchild==ptr)
		   nptr->lchild=NULL;
		else
		   nptr->rchild=NULL;
		delete ptr;
		return;
	}
	else if( (ptr->lchild==NULL && ptr->rchild!=NULL) || //case 2:node with single child
		     (ptr->rchild==NULL && ptr->lchild!=NULL)  )
	{
        if(ptr->lchild==NULL)
        {
        	if(nptr->rchild==ptr)
        		nptr->rchild=ptr->rchild;
        	else
        		nptr->lchild=ptr->rchild;
        }
        else
        {
        	if(nptr->rchild==ptr)
        		nptr->rchild=ptr->lchild;
        	else
        		nptr->lchild=ptr->lchild;
        }
        delete ptr;
        return;
	}
	else                                       //case 3: node has 2 children
	{
		int itemsucc=InorderSucc(item,root);
		cout<<"inorder succ of item to be deleted is "<<itemsucc<<endl;
		DeleteBst(itemsucc);
		cout<<"after deletion of insucc the tree is"<<endl;
		inorder(root);
		cout<<endl;
		cout<<"ptr->data is "<<ptr->data<<endl;
		ptr->data=itemsucc;
		cout<<"ptr->data is after modification "<<ptr->data<<endl;
		cout<<"after deletion of the reqd item, the tree is"<<endl;
		inorder(root);
		return;
	}
}

int hgt(node *root)
{
	if(root==NULL)
		return 0;

	int h1=hgt(root->lchild);
	int h2=hgt(root->rchild);
	return 1+max(h1,h2);
}

bool IsBalanced(node *root)
{
   if(root==NULL)
   	return true;

   int h1=hgt(root->lchild);
   int h2=hgt(root->rchild);

   if(abs(h1-h2)>1)
   	return false;

   bool lbal=IsBalanced(root->lchild);
   bool rbal=IsBalanced(root->rchild);
   if(!lbal || !rbal)
   	  return false;  
   return true;
}

int main()
{
	int n;
	cin>>n;
	while(n--)
	{
		int item;
		cin>>item;
		BstInsert(item);
	}

	inorder(root);

	int item;
	cout<<"enter element to find its inorder successor"<<endl;
    cin>>item;
    InorderSucc(item,root);

    cout<<"enter element to delete"<<endl;
    cin>>item;

    DeleteBst(item);
    inorder(root);

    if(IsBalanced(root))
    	cout<<"\n balanced";
    else
    	cout<<"\n not balanced";
 
}