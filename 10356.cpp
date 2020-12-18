#include<bits/stdc++.h>

using namespace std;
int cnt=1;
map<int,vector<int> > graph,cost;
struct node
{
    int u,w;
    node(int a,int b){u=a; w=b;}
    
    bool operator < (const node& p) const 
	{
    return p.w < w;
    }

};
int d[1000];

int dijkstra(int src ,int dest)
{
    memset(d,30,sizeof(d)); 
   
    priority_queue<node, vector<node> > q;
    q.push(node(src,0));
    d[src]=0;
    while(!q.empty())
    {
        node top=q.top(); q.pop();
        int u=top.u;
        
        if(u==dest) return d[dest];
        
        for(int i=0;i<(int)graph[u].size();i++)
        {
            int v=graph[u][i];
            if(d[u]+cost[u][i] < d[v])
            {
                d[v]=d[u]+cost[u][i];
                q.push(node(v,d[v]));
            }
        }
    }
    return -1;
}

int main()
{
	int node,edge,a,b,w;
	while(scanf("%d %d",&node,&edge)==2)
	{
		for(int i=0;i<edge;i++)
		{
			
			cin>>a>>b>>w;
			
			graph[a].push_back(node+b);
			cost[a].push_back(w);
			graph[node+b].push_back(a);
			cost[node+b].push_back(w);
			graph[b].push_back(a+node);
			cost[b].push_back(w);
			graph[a+node].push_back(b);
			cost[a+node].push_back(w);
		}
		
		int ret=dijkstra(0,node-1);
		printf("Set #%d\n",cnt++);
		if(ret==-1)
		printf("?\n");
		else
		printf("%d\n",ret);
		
		graph.clear();
		cost.clear();
	}
	return 0;
}
