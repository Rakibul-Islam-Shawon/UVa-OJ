#include<bits/stdc++.h>

using namespace std;

map<string ,int>level;

void bfs(string src,string dest,map<string,vector<string> >graph)
{
	vector<string>link;
	queue<string>Q;
	Q.push(src);
	map<string ,int>visited;
	 map<string,string>parent;
	 string path;
	 
	visited[src]=1; 
    level[src]=0;
	while(!Q.empty())
	{
		string u=Q.front();
		for(int i=0;i<graph[u].size();i++)
		{
			string v=graph[u][i];
			if(!visited[v])
			{
				level[v]=level[u]+1; 
				parent[v]=u;
				visited[v]=1;
				Q.push(v);
			}
		}
		Q.pop();
	}
			
		if(level[dest]==100)
		printf("No route\n");
		else
		{
			path=parent[dest];
		link.push_back(dest);
		while(path!=src)
		{
			
			link.push_back(path);
			path=parent[path];
			
		}
		link.push_back(src);
		
			for(int i=link.size()-1;i>0;i--)
			  cout<<link[i]<<" "<<link[i-1]<<endl;
			  	
			
		}

		
		return ;
}


int main()
{
	bool flag=false;
	int size;
	map<string,vector<string> >graph;
	string x,y,src,dest;
	
	while(scanf("%d",&size)!=EOF)
	{
		while(size--)
	{
		
	cin>>x>>y;
		
		level[x]=100;
		level[y]=100;
		graph[x].push_back(y);
		graph[y].push_back(x);
		
	}
	
	cin>>src>>dest;
	level[src]=100;
	level[dest]=100;
	if(flag==true)
	printf("\n");
	
	bfs(src,dest,graph);
	
	graph.clear();
	flag=true;
	}
	
	
	return 0;
}
