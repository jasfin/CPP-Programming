//display all occurences of string pat and its permutations in another string text...finall output the permutation of pat that occurs the max no. of times in text
//idea is to use 2 count array for storing frequency of chars in pat and text, and then iterate through the string and whenever the 2 arrays match ..we found an occurence
#include<iostream>
#include<string>
#include<map>
#define MAX 26
using namespace std;
 
string search(string pat, string txt);
bool compare(char arr1[], char arr2[]);

int main()
{
    int t;
    cin>>t;
    string w,s;
    while(t)
    {
        cout<<"enter pattern and text respectively \n";
        cin>>w;
        cin>>s;
        cout<<search(w,s)<<"\n";
        t--;        
    }
}

bool compare(char arr1[], char arr2[])
{
    for (int i=0; i<MAX; i++)
        if (arr1[i] != arr2[i])
            return false;
    return true;
}
 

string search(string pat, string txt)
{
    map<string,int> m;
    int M = pat.length(), N = txt.length();
    char countP[MAX] = {0}, countTW[MAX] = {0};
    for (int i = 0; i < M; i++)
    {
        (countP[pat[i]-97])++;
        (countTW[txt[i]-97])++;
    }
 
    for (int i = M; i < N; i++)
    {
        if(compare(countP, countTW))
        {
           cout<<"found a match at :"<<i-M<<endl;         
           m[txt.substr(i-M,M)]++;
        }
    
        (countTW[txt[i]-97])++;
         countTW[txt[i-M]-97]--;
    }
 
    if (compare(countP, countTW))
      {
          cout<<"found a match at :"<<N-M<<endl;
          m[txt.substr(N-M,M)]++;
      }
    string res;
    int max=0;
    map<string,int>::iterator it;
    for(auto it=m.begin();it!=m.end();it++)
        if(it->second>max)
        {
            max=it->second;
            res=it->first;
        }
       
    if(max==0)
        return "-1";
    return res;
        
}
 




