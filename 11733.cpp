#include<bits/stdc++.h>
using namespace std;

int pos=1;
struct edge
{
	int u,v;
	int w;
	bool operator < ( const edge& p ) const 
	{      
		return w < p.w;   
	}
};
map<int ,int>par;
map<int,bool>visited;
map<int,int>rank,setsize;
vector<edge>e;

int find(int r)
{
   return (par[r]==r) ? r: (par[r]=find(par[r]));
}

void mst(int n,int cost)
{
	sort(e.begin(),e.end());
	
	int count=0,numofsets=n,s=0,temp,ans,u,v,w;
	
	for(int i=0;i<(int)e.size();i++)
	{
		 u=find(e[i].u);
		 v=find(e[i].v);
		w=e[i].w;
		
		if(u!=v)
    {
    	count++;
    	if(w<cost) 	 
		{
		numofsets--;
		s+=e[i].w;	
		}
    	
    if(rank[u]>rank[v])
    {
    	par[v]=u;
    	setsize[find(u)] += setsize[find(v)];
    }
    else
	{
        par[u]=v;
        if(rank[u]==rank[v]) rank[v]++;
        setsize[find(v)] += setsize[find(u)];
    }
    
    if(count==n-1) break;
    
     }
        
	}
 		ans=numofsets*cost;
 		ans+=s;
 		printf("Case #%d: %d %d\n",pos++,ans,numofsets);
 		
	return ;
}

int main()
{

	int node,edges,w,cost,test,u,v;
	
	cin>>test;
	
	while(test--)
	{
		cin>>node>>edges>>cost;
		for(int i=1;i<=edges;i++)
	{
		
		scanf("%d %d %d",&u,&v,&w);
		if(!visited[u])
		{
			par[u]=u;
			rank[u]=0;
			visited[u]=true;
		}
		if(!visited[v])
		{
			par[v]=v;
			rank[v]=0;
			visited[v]=true;
		}
		edge get;
		get.u=u; get.v=v; get.w=w;
		e.push_back(get);
	}
		
		mst(node,cost);
		
		visited.clear();
		rank.clear();
		e.clear();
		par.clear();
		
	}
	
	return 0;
	
}
