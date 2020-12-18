#include<bits/stdc++.h>
using namespace std;

int cnt=1;
bool compare(const pair<string ,int>&i, const pair<string,int>&j)
{
    return i.first < j.first;
}

struct edge
{
	char u,v;
	int w;
	bool operator < ( const edge& p ) const 
	{      
		return w < p.w;   
	}
};

map<char ,char>par;
vector<pair<string,int> >ans(100);
vector<edge>e;

char find(char r)
{
   return (par[r]==r) ? r: find(par[r]);
}

void mst(int n)
{
	char u,v,x,y;
	string temp;
	sort(e.begin(),e.end());
	int p=0;
	for(int i=65;i<65+n;i++) par[i]=i;
	
	int count=0,w;
	
	for(int i=0;i<(int)e.size();i++)
	{
		 u=find(e[i].u);
		 v=find(e[i].v);
		 w=e[i].w;
		if(u!=v)
		{
			par[v] = par[u];
			count++;
			if(e[i].u>e[i].v)
			{
				x=e[i].v;
				y=e[i].u;
			}
			else
			{
				x=e[i].u;
				y=e[i].v;
			}
			temp="";
			temp+=x;
			temp+='-';
			temp+=y;
			ans[p].first=temp;
			ans[p].second=w;
			p++;
			if(count==n-1) break;
		}
	}
	
	int check,pos=0,start=0;
	for(int i=0;i<p; )
	{
		check=ans[i].second;
		while(ans[i].second==check and i<p)
		{
			pos++;
			i++;
		}
		sort(ans.begin()+start,ans.begin()+pos,compare);

		start=i;			
	}
	
	for(int i=0;i<p;i++)
	printf("%s %d\n",ans[i].first.c_str(),ans[i].second);
	return ;
}

int main()
{
    
    char u,v;
	int node,edges,w,test,p,input;
	cin>>test;
	while(test--)
   {
	
	cin>>node;
	
	for(int i=65;i<65+node;i++)
	{	
		p=0;
		scanf("%d",&input);
		if(input!=0)
		{
			edge get;
			u=(char)i;
			v=(char)(65+p);
			w=input;
		    get.u=u; get.v=v; get.w=w;
		    e.push_back(get);
		}
		p++;
		while(p<node)
		{
			scanf(", %d",&input);
			
			if(input!=0)
		{
			edge get;
			u=(char)i;
			v=(char)(65+p);
			w=input;
		    get.u=u; get.v=v; get.w=w;
		    e.push_back(get);
		}
		p++;
		}
		
	} 
	printf("Case %d:\n",cnt++);
	mst(node);
	
	par.clear();
	e.clear();
	
   }	
   
	return 0;
	
}
