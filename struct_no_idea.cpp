#include<bits/stdc++.h>

using namespace std;
typedef struct stud stud;
struct stud 
{
  int level,city,discount;
  //string name;
};

int main()
{
  int n;
  cin>>n;
//  stud *det=new stud[n];
  stud det[n];
  for(int i=0;i<n;i++)
    cin>>det[i].level>>det[i].city>>det[i].discount;
  
  cout<<"okay";
    
  int l1min=0,l2min=0,l3min=0;
  vector<int> c1,c2,c3;
  for(int i=0;i<n;i++)
  {
     if(det[i].level==1 && det[i].discount<l1min)
      {
        l1min=det[i].discount;
        c1.push_back(det[i].city);
      }   
     if(det[i].level==2 && det[i].discount<l2min)
      {
        l2min=det[i].discount;
        c2.push_back(det[i].city);
      }
    if(det[i].level==3 && det[i].discount<l3min)
      {
        l3min=det[i].discount;
        c3.push_back(det[i].city);
      }
  }
  cout<<"okay";

  sort(c1.begin(),c1.end());
  sort(c2.begin(),c2.end());
  sort(c3.begin(),c3.end());

  cout<<"level 1:"<<"city is "<<c1[0]<<" discount is "<<l1min<<endl;
  cout<<"level 2:"<<"city is "<<c2[0]<<" discount is "<<l2min<<endl;
  cout<<"level 3:"<<"city is "<<c3[0]<<" discount is "<<l3min<<endl;

}
