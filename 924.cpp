#include<bits/stdc++.h>

using namespace std;

void bfs(int src,map<int,vector<int> >graph)
{
	int save[3000]={0};
	pair<int,int>ans;
	int size=0;
	queue<int>Q;
	Q.push(src);
	int visited[3000]={0},level[3000];
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
				save[level[u]]++;
			}
		}
		
		if(save[level[u]]>size)
		 {
		 	ans.first=save[level[u]];
		 	ans.second=level[u]+1;
		 	size=ans.first;
		 }
		
		Q.pop();
	}
	if(size==0)
	printf("0\n");
	else
	printf("%d %d\n",ans.first,ans.second);
	
	return ;

}

int main()
{
	map<int,vector<int> >graph;
	int node,size,test,friends,check,src;
	
	  scanf("%d",&node);
	
		for(int i=0;i<node;i++)
	{
		cin>>size;
		for(int j=0;j<size;j++)
		{
			cin>>friends;
			if(friends!=i)
			graph[i].push_back(friends);
		}
	}
	
	cin>>test;
		
		for(int i=0;i<test;i++)
		{
			cin>>src;
			bfs(src,graph);
		}
		
		graph.clear();

	
	return 0;
}
