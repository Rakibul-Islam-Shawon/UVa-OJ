#include<bits/stdc++.h>
using namespace std;

 
int cnt=1,pos=0;

int bfs(int src, int TTL,map <int, vector<int> > edges)
{
	map<int,int> visited,level;
	int count=0;
	queue<int>Q;
	Q.push(src);
	pos++;
	visited[src]=1; 
    level[src]=0;
	while(!Q.empty())
	{
		int u=Q.front(); 
		for(int i=0;i<edges[u].size();i++)
		{
			int v=edges[u][i];
			if(!visited[v])
			{
				level[v]=level[u]+1;
				if(level[v]>TTL)
				count++; 
				visited[v]=1;
				Q.push(v);
				pos++;
			}	
		}
		Q.pop();
		
	}

return count;		
}

int main()
{
	vector<pair< int,int > >check(100);
	
	int edge,x,y,node,source,ans;
	
	while(1)
	{
		map <int,vector<int> > edges;
		scanf("%d",&edge);
	  
	  if(edge==0)
	  return 0;
	  
	for(int i=0;i<edge;i++)
	{
		cin>>x>>y;
		
		edges[x].push_back(y);
		edges[y].push_back(x);
			
	}
	int p=0;
	
	while(1)
	{
		cin>>check[p].first>>check[p].second;
		if(check[p].first ==0 and check[p].second==0)
		break;
		p++;
	}
	
	for(int i=0;i<p;i++)
	{
		ans=bfs(check[i].first,check[i].second,edges);
		ans+=edges.size()-pos;
		printf("Case %d: %d nodes not reachable from node %d with TTL = %d.\n",cnt++,ans,check[i].first,check[i].second);
		pos=0;
	}
	
	}
	
	return 0;
}
