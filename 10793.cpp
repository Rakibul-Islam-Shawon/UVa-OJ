#include<bits/stdc++.h>
using namespace std;
int cnt=1;
int main()
{
	
	int test,node,edge,u,v,cost,ans;
	int matrix[105][105];
	cin>>test;
	
	while(test--)
	{
		
		cin>>node>>edge;
		
		for(int i=1;i<=node;i++)
		for(int j=1;j<=node;j++)
		{
			if(i==j)
			matrix[i][j]=0;
			else
			matrix[i][j]=20000;
		}
		for(int i=1;i<=edge;i++)
		{
			
			cin>>u>>v>>cost;
			if(matrix[u][v]>cost)
			matrix[u][v]=cost;
			if(matrix[v][u]>cost)
			matrix[v][u]=cost;	
			
			
		}
		
		for(int k=1;k<=node;k++)
		for(int i=1;i<=node;i++)
		for(int j=1;j<=node;j++)
		{
			if(matrix[i][j]>(matrix[i][k]+matrix[k][j]))
			matrix[i][j]=matrix[i][k]+matrix[k][j];
		}
		
		int ans=20000;
		for(int i=1;i<=node;i++)
		{
			 cost=matrix[i][1];
			if(matrix[i][1]==cost and matrix[i][2]==cost and matrix[i][3]==cost and matrix[i][4]==cost and matrix[i][5]==cost)
			{
				int val=0;
				for(int k=1;k<=node;k++)
				{
					val=max(val,matrix[i][k]);
					
				}
			   	if(val<ans)
			   	ans=val;
			}
		}
         
         
		if(ans==20000)
		printf("Map %d: -1\n",cnt++);
		else
		printf("Map %d: %d\n",cnt++,ans);
		
	}
	return 0;
}
