#include<bits/stdc++.h>
using namespace std;

map<int,vector<int> >graph,cost;

struct node
{
    int u,w;
    node(int a,int b){u=a; w=b;}
    
    bool operator < (const node& p) const 
	{
    return p.w < w;
    }

};
int d[20000+5];
int cnt=1;
int dijkstra(int src,int dest)
{
    memset(d,10005,sizeof(d)); 
    priority_queue<node, vector<node> > q;
    q.push(node(src,0));
    d[src]=0;
    while(!q.empty())
    {
        node top=q.top(); 
		q.pop();
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
    int node,edge,src,dest,test;
    cin>>test;
    while(test--)
    {
    	cin>>node>>edge>>src>>dest;
    	
    for(int i=0;i<edge;i++)
    {
        int u,v,w;

        cin>>u>>v>>w;
        graph[u].push_back(v);
        graph[v].push_back(u);
        cost[u].push_back(w);
        cost[v].push_back(w);
        
    }
    int ret=dijkstra(src,dest);
    printf("Case #%d: ",cnt++);
    if(ret==-1) 
	printf("unreachable\n");
    else
    printf("%d\n",ret);
	
	graph.clear();
	cost.clear();	
    }
    
    return 0;
}
