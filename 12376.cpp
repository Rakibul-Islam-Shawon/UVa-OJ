#include<bits/stdc++.h>
using namespace std;

map<int,vector<int> >graph;

int cnt=1;

int main()
{
	int value[101];
	int node,edge,m,n,test,temp,max,src,sum,x,y,save;
	
	cin>>test;
	
	while(test--)
	{
		
		cin>>node>>edge;
		for(int i=0;i<node;i++)
		{
			cin>>value[i];
		}
		for(int i=0;i<edge;i++)
		{
			cin>>x>>y;
			
			graph[x].push_back(y);
		}
		src=0;
		sum=0;
		while(1)
		{
			max=0;
			for(int j=0;j<graph[src].size();j++)
			{
				
				temp=graph[src][j];
				if(value[temp]>max)
				{
					max=value[temp];
					save=temp;
				}
			}
			
			src=save;
			sum+=value[src];
			
			if(graph[src].size()==0)
			break;
				
		}
		printf("Case %d: %d %d\n",cnt++,sum,src);
		graph.clear();
	}
	
	return 0;
}
