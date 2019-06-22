#include<bits/stdc++.h>

using namespace std;
typedef struct node node;
struct node
{
 int data,rank,rep;
 node *rchild,*lchild,*parent;
};
node **p=new node*[10];
int arr[10][10];
map<int,int> inset;
void makeset(int i,int item)
{
   p[i]=new node;
   //cout<<"enter value of element "<<i+1<<endl;
   p[i]->data=item;
   inset[p[i]->data]=i;
   p[i]->rank=0;
   p[i]->rep=i;
   p[i]->rchild=NULL;
   p[i]->lchild=NULL;
   p[i]->parent=NULL;
}

int findset(int a)
{
  return p[inset[a+1]]->data;
  //int aset=inset[a];
}

void setunion(int a,int b)
{
 a++;
 b++;
 int aset=inset[a],bset=inset[b];
 if(p[aset]->rank >= p[bset]->rank)
 {
   p[bset]->parent=p[aset];
   inset[b]=aset;
   p[aset]->rank++;
 }
 else
 {
   p[aset]->parent=p[bset];
   inset[a]=bset;
   p[bset]->rank++;
 }
}



int main()
{
 int n,item;
 cout<<"enter value of n"<<endl;
 cin>>n;
 //node **p=new node*[n];
 for(int i=0;i<n;i++)
 {
   cout<<"enter value of element"<<i+1<<endl;
   cin>>item;
   makeset(i,item);
 }

 //int arr[n][n];
 for(int i=0;i<n;i++)
   for(int j=0;j<n;j++)
      arr[i][j]=0;

 int ch=1,a,b;
 while(ch==1)
 {
   cout<<"enter releation elements"<<endl;
   cin>>a>>b;
   arr[a-1][b-1]=1;
   arr[b-1][a-1]=1;
   cout<<"press 1 to enter more"<<endl;
   cin>>ch;
 }
 
 //makeset,findset,union;;
 for(int i=0;i<n;i++)
   for(int j=0;j<n;j++)
     if(arr[i][j]==1 && findset(i)!=findset(j))
           setunion(i,j);

 set<int> res;
 for(auto it=inset.begin();it!=inset.end();it++)
     res.insert(it->second);
 
 cout<<"number of components ="<<res.size()<<endl;
 /*cout<<"elements"<<endl;
 for(auto it=res.begin();it!=res.end();it++)
    cout<<*it<<"\t";
 */
}
