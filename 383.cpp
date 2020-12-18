#include<bits/stdc++.h>
using namespace std;

map<string ,int>level;
int test=1;

int bfs(string src,string dest,map<string,vector<string> >graph)
{
	queue<string>Q;
	Q.push(src);
	map<string ,int>visited;
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
				visited[v]=1;
				Q.push(v);
			}
		}
		Q.pop();
	}
			
		return level[dest];
		
}


int main()
{
	char node[100][4];
	map<string,vector<string> >graph;
	int data,m,n,p,ret,size;
	string x,y,src,dest;
	
	cin>>data;
	
	while(data--)
	{
		
		scanf("%d %d %d",&m,&n,&p);
		
		for(int i=0;i<m;i++)
		{
			cin>>node[i];
			
			level[node[i]]=15;
		}
		
		for(int i=0;i<n;i++)
		{
			cin>>x>>y;
			
			graph[x].push_back(y);
			graph[y].push_back(x);
		}
		if(test==1)
		printf("SHIPPING ROUTES OUTPUT\n\n");

        printf("DATA SET  %d\n\n",test++);


		for(int i=0;i<p;i++)
		{
			
			cin>>size>>src>>dest;
			
			ret=bfs(src,dest,graph);
			if(ret==15)
			printf("NO SHIPMENT POSSIBLE\n");
			else
			printf("$%d\n",ret*size*100);
		}
		printf("\n");
		
		graph.clear();
		
	}
	
	printf("END OF OUTPUT\n");
	
	return 0;
}
