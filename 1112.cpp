#include<bits/stdc++.h>
using namespace std;

int matrix[101][101];
int main()
{
	bool flag=false;
	int test,node,time,exit,edge,x,y,cost;
	cin>>test;
	
	while(test--)
	{
		
		cin>>node>>exit>>time;
		cin>>edge;
		for(int i=1;i<=node;i++)
		for(int j=1;j<=node;j++)
		{
			if(i==j)
			matrix[i][j]=0;
			else
			matrix[i][j]=21474836;
		}
		for(int i=0;i<edge;i++)
		{
			cin>>x>>y>>cost;
			
			matrix[x][y]=cost;
		}
		for(int k=1;k<=node;k++)
		for(int i=1;i<=node;i++)
		for(int j=1;j<=node;j++)
		{
			if(matrix[i][j]>(matrix[i][k]+matrix[k][j]))
			matrix[i][j]=matrix[i][k]+matrix[k][j];
		}
		int cnt=0;
		for(int i=1;i<=node;i++)
		{
			if(matrix[i][exit]<=time)
			cnt++;
		}
		if(flag)
		printf("\n");
		
		printf("%d\n",cnt);
		
		flag=true;
		
	}
}
