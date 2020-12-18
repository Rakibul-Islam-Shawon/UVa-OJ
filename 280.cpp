#include<bits/stdc++.h>
using namespace std;

map<int ,vector<int> >graph;

void bfs(int src,int n)
{
	int level[101];
	for(int i=0;i<=n;i++)
	level[i]=1000;
	queue<int>Q;
	Q.push(src);
	int visited[101]={0};
	
	while(!Q.empty())
	{
		int u=Q.front(); 
		for(int i=0;i<graph[u].size();i++)
		{
			int v=graph[u][i];
			if(!visited[v])
			{
				level[v]=level[u]+1;
				visited[v]=1;
				Q.push(v);
			}
		}
		Q.pop();
	}
             vector<int>arra;
             int cnt=0;
            for(int i=1;i<=n;i++)
			{
				if(level[i]==1000)
				{
					cnt++;
					arra.push_back(i);
				}
				
			}
			cout<<cnt;
			for(int i=0;i<arra.size();i++)
			cout<<" "<<arra[i];
			printf("\n");
   return ;
}

int main()
{
	vector<int>arra;
	int n,src,dest,test,check;
	while(cin>>n)
	{
		if(n==0)
		return 0;
		
		while(cin>>src)
		{
		    if(src==0)
		    break;
			while(cin>>dest)
			{
			if(dest==0)
			break;
			graph[src].push_back(dest);
	
			}
		}
			
		cin>>test;
		
		while(test--)
		{
			cin>>check;
			
			bfs(check,n);
			
		}
		graph.clear();
	}
	return 0;
}
