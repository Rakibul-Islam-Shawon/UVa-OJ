#include<bits/stdc++.h>
using namespace std;
map<int,int>level;

void bfs(int src,int dest,map<int,vector<int> >graph)
{
	vector<int>link;
	queue<int>Q;
	Q.push(src);
	map<int,int>visited,parent;
	int path;
	visited[src]=1; 
    level[src]=0;
	while(!Q.empty())
	{
		int u=Q.front(); 
		for(int i=0;i<graph[u].size();i++)
		{
			int v=graph[u][i];
			if(!visited[v])
			{
				level[v]=level[u]+1;
				parent[v]=u;
				visited[v]=1;
				Q.push(v);
			}
		}
		Q.pop();
	}
		if(level[dest]==150)
		{
			printf("connection impossible\n");
			
		}
		else
		{
			path=parent[dest];
		link.push_back(dest);
		while(path!=src)
		{
			
			link.push_back(path);
			path=parent[path];
			
		}
		cout<<src;
		for(int i=link.size()-1;i>=0;i--)
		cout<<" "<<link[i];
		printf("\n");
		}
		
		
		return ;
}

int main()
{
	string p,str,sub;
	map<int,vector<int> >graph;
	int set,index,temp,m,src,dest;
	char *token,ch;
	stringstream sso;
	while(scanf("%d",&set)!=EOF)
	{
		
		for(int i=0;i<set;i++)
		{
			cin>>str;
            int k=0;
            p="";
            while(str[k]!='-')
            {
            	p+=str[k];
            	k++;
            }
            k++;
            if(k!=str.size())
            {
            sso<<p;
            sso>>index;
            sso.clear();
            sub=str.substr(k,str.size());
			token=strtok(&sub[0],",");
			while(token)
			{
			sso<<token;
			sso>>temp;
			graph[index].push_back(temp);	
			token=strtok(NULL,",");	
			sso.clear();
			}	
            }
            		
		}
		printf("-----\n");
		cin>>m;
		
		for(int j=0;j<m;j++)
		{
			cin>>src>>dest;
			level[src]=150;
			level[dest]=150;
			bfs(src,dest,graph);
			
			level.clear();
		}
		
		graph.clear();
	}
	
	return 0;
}
