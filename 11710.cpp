#include<bits/stdc++.h>

using namespace std;
struct data 
{ 
 string v;
 int cost;
    bool operator < ( const data& p ) const { 
        return cost > p.cost; 
    }
};
map<string,vector<string> >vec;
map<string,vector<int> >cost;

map<string,bool>visited;


void mst(string src,int n)
{

	 priority_queue<data, vector<data> > pq;
	 
	int i,s=0,j,p;
	string u,v;
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
			printf("Impossible\n");
			return ;
	    }
		data T=pq.top();
		src=T.v;
		p=T.cost;
		pq.pop();
		}while(visited[src]==1);
		s+=p;
		
	}
	printf("%d\n",s);
	return ;
}
int main()
{
	string input,x,y,src;
	int node,edges,w;
	while(scanf("%d %d",&node,&edges)==2)
	{
		if(node==0 and edges==0)
		return 0;
	
	for(int i=0;i<node;i++)
	{
		cin>>input;
	}
	
		for(int i=0;i<edges;i++)
	{
		cin>>x>>y>>w;
			
		vec[x].push_back(y);
		vec[y].push_back(x);
		cost[x].push_back(w);
		cost[y].push_back(w);
	}
	
	cin>>src;
	
	if(edges<node-1)
	{
		printf("Impossible\n");
	}
	else
	   mst(src,node);
	  
	        vec.clear();
			cost.clear();
			visited.clear();
	}

	return 0;
}
