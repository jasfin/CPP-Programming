#include<stdio.h>
typedef struct std std;
struct std
{
    int data;
    std *rchild,*lchild;
};
int main()
{
 std *root=calloc(1,sizeof(std)),*nnptr,*nptr;
 printf("\n enter value of the root");
 scanf("%d",&root->data);
 root->rchild=NULL;
 root->lchild=NULL;
 int ch=1;
 while(ch==1)
 {
    ptr=calloc(1,sizeof(std));
    printf("\n enter value to be entered into the binary tree");
    scanf("%d",&ptr->data);
    int i=ptr->data;
    ptr->rchild=NULL;
    ptr->lchild=NULL;
    nptr=root;
    while(nptr!=NULL)
    {
        if(i>nptr->data)
        {
          nnptr=nptr;
          nptr=nptr->rchild;
        }
        if(i<nptr->data)
        {
            nnptr=nptr;
            nptr=nptr->lchild;
        }

    }
    if(i>nnptr->data)
      nnptr->rchild=ptr;
    else
      nnptr->lchild=ptr;
 }


}