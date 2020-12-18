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
	bool flag=false;
	
	int node,e,x,y,w,m,max,orginal,k,src;
	
	while(cin>>node)
	{
		max=2147483647;
		orginal=0;
		for(int i=1;i<=node-1;i++)
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
			orginal+=w;
		}
		scanf("%d",&k);
		for(int i=0;i<k;i++)
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
		scanf("%d",&m);
		for(int i=0;i<m;i++)
		{
			scanf("%d %d %d",&x,&y,&w);
			//vec[x].push_back(y);
		    //vec[y].push_back(x);
		    //cost[x].push_back(w);
		    //cost[y].push_back(w);
		}
		
			int ret=mst(src,node);
			if(ret>orginal)
			ret=orginal;
			if(flag==true)
			printf("\n");
			printf("%d\n%d\n",orginal,ret);
			
			flag=true;
			vec.clear();
			cost.clear();
			visited.clear();
	}
	

	
	return 0;
}
