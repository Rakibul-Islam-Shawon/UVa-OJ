#include<bits/stdc++.h>

using namespace std;
int test=1;

vector<int>edges[30];

void bfs(int src,int dest)
{
	queue<int>Q;
	Q.push(src);
	int visited[100]={0},level[100];
	visited[src]=1; 
    level[src]=0;
	while(!Q.empty())
	{
		int u=Q.front(); 
		for(int i=0;i<edges[u].size();i++)
		{
			int v=edges[u][i];
			if(!visited[v])
			{
				level[v]=level[u]+1;
				visited[v]=1;
				Q.push(v);
			}
		}
		Q.pop();
	}
	    
		printf("%2d to %2d: %d\n",src,dest,level[dest]);
		
	return ;	
}

int main()
{
	int n,temp,cnt,check;
	int i=1;
	pair<int,int>var;
	
	while(scanf("%d",&cnt)!=EOF)
	{
		while(cnt--)
		{
			scanf("%d",&temp);
			edges[i].push_back(temp);
			edges[temp].push_back(i);
		}
		if(i==19)
		{
			cin>>n;
	printf("Test Set #%d\n",test);
	
	for(int j=0;j<n;j++)
	    {
		cin>>var.first>>var.second;
		
		bfs(var.first,var.second);
		
	    }
	    printf("\n");
	    test++;
	
	   for(int p=0; p<21; p++)
       {
           edges[p].clear();
       }
	    i=0;
		}
			
	i++;
	
	
	}

	return 0;
}
