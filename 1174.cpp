#include<bits/stdc++.h>
using namespace std;


struct edge
{
	string u,v;
	int w;
	bool operator < ( const edge& p ) const 
	{      
		return w < p.w;   
	}
};
map<string ,string>par;
map<string,bool> visited;
vector<edge>e;

string find(string r)
{
   return (par[r]==r) ? r: par[r]=find(par[r]);
}

int mst(int n)
{
	string u,v;
	sort(e.begin(),e.end());
	
	int count=0,s=0;
	for(int i=0;i<(int)e.size();i++)
	{
		 u=find(e[i].u);
		 v=find(e[i].v);
		if(u!=v)
		{
			par[v] = par[u];
			count++;
			s+=e[i].w;
			if(count==n-1) break;
		}
	}
	return s;
}

int main(){

	int node,edges,w,test;
	string u,v;
	bool flag=false;
	cin>>test;
	
	while(test--)
	{
		cin>>node>>edges;
		
		for(int i=1;i<=edges;i++)
	{
		
		cin>>u>>v>>w;
		if(!visited[u])
		{
			par[u]=u;
			visited[u]=true;
			
		}
		if(!visited[v])
		{
			par[v]=v;
			visited[v]=true;
			
		}
		edge get;
		get.u=u; get.v=v; get.w=w;
		e.push_back(get);
	}
	      if(flag==true)
	      printf("\n");
		cout<<mst(node)<<endl;
		flag=true;
		
		par.clear();
		visited.clear();
		e.clear();
	}
		
	return 0;
	
}
