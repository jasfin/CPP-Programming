// optimization with curswap and break statements
#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for(int a_i = 0; a_i < n; a_i++){
       cin >> a[a_i];
    }
    // Write Your Code Here
    int curswap,totswap=0,temp;
    for(int i=0;i<n;i++)
    {
        curswap=0;
        for(int j=0;j<n-i-1;j++)
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
                curswap++;
            }
        if(curswap==0)
            break;
        totswap+=curswap;           
        
    }
    cout<<"Array is sorted in "<<totswap<<" swaps.\n";
    cout<<"First Element: "<<a[0]<<"\n";
    cout<<"Last Element: "<<a[n-1]<<"\n";
    return 0;
}

