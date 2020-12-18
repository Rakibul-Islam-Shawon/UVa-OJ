#include<bits/stdc++.h>
using namespace std;

void bfs(int src,int dest,map<int,vector<int> >graph)
{

	queue<int>Q;
	Q.push(src);
	map<int,int>visited,level;
	visited[src]=1; 
    level[src]=0;
	while(!Q.empty())
	{
		int u=Q.front(); 
		for(int i=0;i<graph[u].size();i++)
		{
			int v=graph[u][i];
			if(!visited[v])
			{
				level[v]=level[u]+1; 
				visited[v]=1;
				Q.push(v);
			}
		}
		Q.pop();
	}
	
	printf("%d %d %d\n",src,dest,level[dest]-1);
	return ;		
}

int main()
{
	map<int,vector<int> >graph;
	int test,n,index,src,dest,p,temp;
	int value;
	cin>>test;
	bool flag=false;
	while(test--)
	{
		scanf("%d",&n);
		
		for(int i=0;i<n;i++)
		{
			scanf("%d %d",&index,&p);
			for(int j=0;j<p;j++)
			{
				scanf("%d",&value);
				graph[index].push_back(value);
		    }
			
		}
		
		cin>>src>>dest;
		if(flag)
		printf("\n");
		bfs(src,dest,graph);
		flag=true;
		graph.clear();
	}
	return 0;
}
