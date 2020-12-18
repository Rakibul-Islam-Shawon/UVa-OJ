#include<bits/stdc++.h>

using namespace std;
struct data 
{  int v,cost;
    bool operator < ( const data& p ) const { 
        return cost > p.cost; 
    }
};
map<int,vector<int> > vec,cost;
map<int,bool>visited;

int mst(int src,int n)
{

	 priority_queue<data, vector<data> > pq;
	 
	int i,u,v,sum=0,j,p;
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
		data T=pq.top();
		src=T.v;
		p=T.cost;
		pq.pop();
		}while(visited[src]==1);
		sum+=p;
	}
	return sum;
}
int main()
{
	
	int node,edges,u,v,w,i,src,sum;
	
	while(scanf("%d %d",&node,&edges)==2)
	{
		sum=0;
		int min=2147483647;
		if(node==0 and edges==0)
		return 0;
		
		for(i=1;i<=edges;i++)
	{
		scanf("%d %d %d",&u,&v,&w);
		sum+=w;
		if(w<min)
		{
			min=w;
			src=u;
		}
		vec[u].push_back(v);
		vec[v].push_back(u);
		cost[u].push_back(w);
		cost[v].push_back(w);
		
	}
	  int ret=mst(src,node);
	  printf("%d\n",sum-ret);
	  
	  vec.clear();
	  cost.clear();
	  visited.clear();
	
	}
		
	return 0;
}
