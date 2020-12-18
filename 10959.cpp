#include<bits/stdc++.h>
using namespace std;

map<int, vector<int> > edges;

void bfs(int src,int p)
{
	queue<int>Q;
	Q.push(src);
	bool visited[1000+5]={0};int level[1000+5];
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
				visited[v]=1;
				Q.push(v);
			}
		}
		Q.pop();
	}
	for(int i=1;i<p;i++)
	{
		printf("%d\n",level[i]);
	}	
}


int main()
{
	
	int test,p,d,x,y;
	
	cin>>test;
	bool flag=false;
	while(test--)
	{
		scanf("%d %d",&p,&d);
		
		for(int i=0;i<d;i++)
		{
			
			scanf("%d %d",&x,&y);

				edges[x].push_back(y);
		        edges[y].push_back(x);	
		      
		}
		if(flag==true)
		printf("\n");
		bfs(0,p);
		flag=true;
		
		edges.clear();
	}
	return 0;
}
