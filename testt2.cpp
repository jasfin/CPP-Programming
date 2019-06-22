#include <bits/stdc++.h>

using namespace std;

vector <int> cutTheSticks(vector <int> arr) {
    // Complete this function
    vector<int>::iterator it,j,p;
    vector<int> v;
    int count;
    sort(arr.begin(),arr.end());
    int temp;
    for(it=arr.begin();it!=arr.end();it++)
    {
        while(*it==0) it++;
        if(it==arr.end()) break;
        count=0;
        temp=*it;
        for(j=it;j!=arr.end();j++)
        {
           // if(*j!=0)
          //  {
                count++;
                *j-=temp;
          //  }
        }
        for(p=arr.begin();p!=arr.end();p++)
                cout<<"\t"<<*p;
        cout<<"\n";
        v.push_back(count);
        
    }
    return v;
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int arr_i = 0; arr_i < n; arr_i++){
       cin >> arr[arr_i];
    }
    vector <int> result = cutTheSticks(arr);
   cout<<"\n\n\n";
    for (ssize_t i = 0; i < result.size(); i++) {
        cout << result[i] << (i != result.size() - 1 ? "\n" : "");
    }
    cout << endl;


    return 0;
}

