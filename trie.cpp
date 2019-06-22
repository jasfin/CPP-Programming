#include<iostream>
#include<map>
#include<cstring>
using namespace std;
typedef struct trie trie;

struct trie
{
 map<char,trie*> m;
 bool isleaf;
};

trie *getnode()
{
 trie *ptr=new trie;
 ptr->isleaf=false;
 return ptr;
}

void insert(trie *&head,char *str)
{
 if(head==NULL)
    head=getnode();
 
 trie *ptr=head;
 int lim=strlen(str),i=0;
 while(i<lim)
 {
  if(ptr->m.find(str[i])==ptr->m.end())
      ptr->m[str[i]]=getnode();
  
  ptr=ptr->m[str[i]];
 
  i++;
 }
 ptr->isleaf=true;
}

bool search(trie *ptr,char *str)
{
  if(ptr==NULL)
    return false;
  
  int i=0,lim=strlen(str);
  while(i<lim)
  {
    if(ptr->m.find(str[i])==ptr->m.end())
        return false;
    
    ptr=ptr->m[str[i]];
    i++;
  }
  return(ptr->isleaf);
}

int havechildren(trie *ptr)
{
 int count=0;
 for(auto i=ptr->m.begin();i!=ptr->m.end();i++)
        count++;
 return count;
}

bool deletion(trie *&ptr,char *str)
{
 if(ptr==NULL)
   return false;

 if(*str)  //move to the trie node corresponding to the end of string in the trie
 {
   if(ptr->m.find(*str)==ptr->m.end())
       return false;
   bool ch=deletion(ptr->m[*str],str+1);
   if(ch==false)  return false;
   if(ptr->isleaf==false &&  havechildren(ptr)-1==0)
        {
          delete ptr;
          ptr=nullptr;
          return true;
        }
   ptr->m.erase(*str);
   return false;
 }

 if(*str=='\0' && ptr->isleaf)
 {
   if(havechildren(ptr)==0)
   {
     delete ptr;
     ptr=nullptr;
     return true;
   }
   else
   {
    ptr->isleaf=false;
    return false;
   }
 }
}

/*int havechildren(trie *ptr)
{
 int count=0;
 for(auto i=ptr->m.begin();i!=ptr->m.end();i++)
        count++;
 return count;
}
 
*/

int main()
{
  trie *head=NULL;
  insert(head,"hello");
  insert(head,"hellington");
  cout<<search(head,"hellington")<<"\n";
  cout<<search(head,"hello")<<"\n";
  deletion(head,"hello");
   cout<<search(head,"hello")<<"\n";
  cout<<search(head,"hellington")<<"\n";
  deletion(head,"hellington");
  cout<<search(head,"hellington")<<"\n";
}
 
