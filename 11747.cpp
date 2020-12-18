#include<bits/stdc++.h>
using namespace std;


struct edge
{
	int u,v;
	int w;
	bool operator < ( const edge& p ) const 
	{      
		return w < p.w;   
	}
};
map<int , int>par;

vector<edge>e;
vector<int>ans;

int find(int r)
{
   return (par[r]==r) ? r: find(par[r]);
}

void mst(int n)
{
	sort(e.begin(),e.end());
	
	for(int i=0;i<n; i++) par[i]=i;
	
	for(int i=0;i<(int)e.size();i++)
	{
		int u=find(e[i].u);
		int v=find(e[i].v);
		
		if(u!=v)
		{
			par[v] = par[u];
			
		}
		else
		ans.push_back(e[i].w);
	}
	return ;
}

int main(){

	int node,edges,w;
	while(cin>>node>>edges)
	{
		if(node==0 and edges==0)
		return 0;
		
		for(int i=1;i<=edges;i++)
	{
		int u,v;
		cin>>u>>v>>w;
		edge get;
		get.u=u; get.v=v; get.w=w;
		e.push_back(get);
	}
	
	mst(node);
	if(ans.size()==0)
	printf("forest\n");
	else
	{
		cout<<ans[0];
		for(int i=1;i<ans.size();i++)
	     cout<<" "<<ans[i];
	     printf("\n");
    }
     
     ans.clear();
     par.clear();
     e.clear();
	}

	return 0;
	
}
