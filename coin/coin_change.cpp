#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n,ele;
    vector<int> v;
    cout<<"enter n";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>ele;
        v.push_back(ele);
    }
    // 1,2,5
    char f1='y',f2='y',f5='y';
    int large,idiff1,idiff2,idiff5,diff1=0,diff2=0,diff5=0,select,count=0;
    while(1)
    {
        large=0;
        for(int k=0;k<n;k++)
           if(v[k]>large) large=v[k];
    
        for(int i=0;i<n;i++)
        {
          if(v[i]!=large) 
         {
           
           idiff1=large-(v[i]+1);
           if(idiff1<0) { f1='o'; idiff1=-idiff1; }
           idiff2=large-(v[i]+2);
           if(idiff2<0) { f2='o'; idiff2=-idiff2; }
           idiff5=large-(v[i]+5);
           if(idiff5<0) { f5='o'; idiff5=-idiff5; }
          
           diff1+=idiff1;
           diff2+=idiff2;
           diff5+=idiff5;
         }
        }
         if(f1=='o') diff1+=(diff2+diff5);
         if(f2=='o') diff2+=(diff1+diff5);
         if(f5=='o') diff5+=(diff1+diff2);
         if(diff5<=diff1 && diff5<=diff2)
           select=5;
         else if(diff2<=diff1 && diff2<=diff5)
           select=2;
         else
           select=1;
         
         for(int j=0;j<n;j++)
         {
            if(v[j]!=large) v[j]+=select;
         }
         if(diff1==0 || diff2==0 || diff5==0) {break; }
         diff1=0; diff2=0; diff5=0;
         count++;
         //if(count==5) break;
       
    }
    for(int i=0;i<n;i++) cout<<"\t"<<v[i];
    cout<<"\n"<<count;
}