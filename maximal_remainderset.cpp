//https://www.hackerrank.com/challenges/non-divisible-subset/problem
//given n numbers, find the size of maximal subset such that the sum of any 2 numbers isnt divisible by k

#include <bits/stdc++.h>

using namespace std;

int nonDivisibleSubset(int k, vector <int> arr) {
    // Complete this function
    // take an array of frequencies 0 to n-1 each denoting the total numbers with that remainder..
    int count=0;
    count+=(arr[0]>0?1:0); 
    /* sum of 2 numbers, ie; a+b is divisible by k iff sum of remainders a/k and b/k = k or both are equal to zero.
       so, our set should contain those values whose remainder sum isn't k, for the maximum set, take max(rem[i],rem[k-i])
       additional check cases are (1) include 1 element with rem=0 if at least one number has rem 0
                                  (2) if n is even, include 1 element with rem=n/2 if rem[n/2]>0;
       eg: remainders are
       0
       1
       2
       3
       4
       5
       6
       
       evaluate for n=even and n=odd;*/
    count+=((k%2==0 && arr[k/2]>0)?1:0);
    float p=(float)k/2;
    for(int i=1;i<p;i++)
      count+=max(arr[i],arr[k-i]);
    return count;    
}

int main() {
    int n,num;
    int k;
    cin >> n >> k;
    vector<int> arr(k,0);
    for(int arr_i = 0; arr_i < n; arr_i++){
       cin >> num;
       arr[num%k]++;
    }
    int result = nonDivisibleSubset(k, arr);
    cout << result << endl;
    return 0;
}

