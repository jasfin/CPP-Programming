#include<bits/stdc++.h>
using namespace std;

void TopoSort(int vertex,vector<int> graph[],bool visited[],stack<int> &s)
{
	visited[vertex]=true;

	for(auto it=graph[vertex].begin();it!=graph[vertex].end();it++)
	 	 if(!visited[*it])
	 	    TopoSort(*it,graph,visited,s);

	s.push(vertex);	
}

int main()
{
	int n;
	cin>>n;
	vector<int> graph[n];
	int e;
	cin>>e;
	while(e--)
	{
		int start,end;
		cin>>start>>end;
		graph[start].push_back(end);
	}

    bool visited[n];
    stack<int> s;
    memset(visited,false,sizeof(visited));
    for(int i=0;i<n;i++)
    	if(!visited[i])
           TopoSort(i,graph,visited,s);

    cout<<"\n the topological sorted order is \n";
    while(!s.empty())
    {
    	cout<<s.top()<<"\t";
    	s.pop();
    }
}        