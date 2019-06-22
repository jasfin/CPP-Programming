#include<bits/stdc++.h>
using namespace std;

void dfs(vector<int> graph[],int item,bool *visited,int n)
{
	cout<<item<<"\t";
	visited[item]=true;

	for(int i=0;i<graph[item].size();i++)
	{
		int v=graph[item][i];
        if(!visited[v])
          dfs(graph,v,visited,n);
	}
}


int main()
{
	cout<<"enter n,e"<<endl;
	int n;
	cin>>n;
	vector<int> graph[n];
    int e;
    cin>>e;
    cout<<"enter edges";
    while(e--)
    {
    	int a,b;
    	cin>>a>>b;
    	graph[a].push_back(b);
    	graph[b].push_back(a);
    }

    bool *visited=new bool[n];
    for(int i=0;i<n;i++)
    	visited[i]=false;

    dfs(graph,0,visited,n);

}