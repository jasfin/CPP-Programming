/* Sample Input 0

7
100 100 50 40 40 20 10
4
5 25 50 120
Sample Output 0

6
4
2
1
https://www.hackerrank.com/challenges/climbing-the-leaderboard/problem

Alice is playing an arcade game and wants to climb to the top of the leaderboard. Can you help her track her ranking as she beats each level? The game uses Dense Ranking, so its leaderboard works like this:

The player with the highest score is ranked number  on the leaderboard.
Players who have equal scores receive the same ranking number, and the next player(s) receive the immediately following ranking number.
For example, four players have the scores , , , and . Those players will have ranks , , , and , respectively.

When Alice starts playing, there are already  people on the leaderboard. The score of each player  is denoted by . Alice plays for  levels, and we denote her total score after passing each level  as . After completing each level, Alice wants to know her current rank.

You are given an array, , of monotonically decreasing leaderboard scores, and another array, , of Alice's cumulative scores for each level of the game. You must print  integers. The  integer should indicate the current rank of alice after passing the  level.

  */
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include<map>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    long int n,m1,score,rank;
    map<long int,long int> m;
    m.insert(make_pair(0,0)); 
    long int prevrank=0,prevscore=0;
    //vector<long int> scores(1000000000);
    cin>>n;
    for(long int i=0;i<n;i++)
    {
        cin>>score;
        if(score!=prevscore)
        {
            prevrank++;
            m[prevrank]=score;
            prevscore=score;
        }
    }
    //maxrank=prevrank;
    long int ele,it;
    cin>>m1;
    for(long int i=0;i<m1;i++)
    {  
        cin>>ele;
        for(it=prevrank;it>0;it--)
            if(ele<m[it]) 
            {
                rank=it+1;
                prevrank=rank;
                break;
            }
            else if(ele==m[it])
            {
                rank=it;
                prevrank=rank;
                break;
            }
        if(it!=0) cout<<rank<<"\n";
        else cout<<1<<"\n";
    }
        
        
        
        
    return 0;
}

