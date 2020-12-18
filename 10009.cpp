#include<bits/stdc++.h>

using namespace std;

map<char,vector<char> >graph;

int bfs(char src,char dest)
{
	
	map<char,char>parent;
	vector<char>link;
	char main,path,temp;
	queue<char>Q;
	map<char,int>visited,level;
	main=dest;
	if(dest=='R')
	swap(dest,src);
	Q.push(src);
	visited[src]=1; 
    level[src]=0;
	while(!Q.empty())
	{
		char u=Q.front(); 
		for(int i=0;i<graph[u].size();i++)
		{
				
			char v=graph[u][i];
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
			path=parent[dest];
		temp=dest;
		link.push_back(temp);
		while(path!=src)
		{
			temp=path;
			link.push_back(temp);
			path=parent[path];
			
		}
		temp=src;
		link.push_back(temp);
		if(main=='R')
		for(int i=0;i<link.size();i++)
		cout<<link[i];
		else
		for(int i=link.size()-1;i>=0;i--)
		cout<<link[i];
		
		printf("\n");
		
		return 0;
}

int main()
{
	bool flag=false;
	int test,m,n;
	string x,y,src,dest;
	
	cin>>test;
	
	while(test--)
	{
		cin>>m>>n;
		
		for(int i=0;i<m;i++)
		{
			cin>>x>>y;
			
			graph[x[0]].push_back(y[0]);
			graph[y[0]].push_back(x[0]);
	    }
	     if(flag)
	     printf("\n");
	    for(int j=0;j<n;j++)
	    {
	    	cin>>src>>dest;
	        
	    	bfs(src[0],dest[0]);
	    }
		 flag=true;
		graph.clear();
	}
	return 0;
}
