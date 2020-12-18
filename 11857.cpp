#include<bits/stdc++.h>

using namespace std;
struct data 
{  int v,cost;
    bool operator < ( const data& p ) const { 
        return cost > p.cost; 
    }
};
map<int,vector<int> >vec,cost;
map<int,bool>visited;

void mst(int src,int n)
{

	 priority_queue<data, vector<data> > pq;
	 
	int i,u,v,max=0,j,p;
	for(i=1;i<n;i++)
	{
		u=src;
		visited[src]=1;
		for(j=0;j<vec[u].size();j++)
		{
			v=vec[u][j];
			if(visited[v]==0)
			{
				data D; 
				D.v=v;
				D.cost=cost[u][j];
				pq.push(D);
			}
		}
		do
		{
		if(pq.empty())
		{
			printf("IMPOSSIBLE\n");
			return ;
	    }
		data T=pq.top();
		src=T.v;
		p=T.cost;
		pq.pop();
		}while(visited[src]==1);
		
		if(p>max) max=p;
		
	}
	printf("%d\n",max);
	return ;
}
int main()
{
	
	int node,edges,x,y,w,ret,max,src;
	while(scanf("%d %d",&node,&edges)==2)
	{
		if(node==0 and edges==0)
		return 0;
		max=2147483647;
		src=-1;
		for(int i=0;i<edges;i++)
	{
		scanf("%d %d %d",&x,&y,&w);
		
		    if(w<max)
			{
				max=w;
				src=x;
			}
			
		vec[x].push_back(y);
		vec[y].push_back(x);
		cost[x].push_back(w);
		cost[y].push_back(w);
	}
	
	if(src==-1 or edges<node-1)
	{
		printf("IMPOSSIBLE\n");
	}
	else
	   mst(src,node);
	  
	       vec.clear();
			cost.clear();
			visited.clear();
	}

	return 0;
}
