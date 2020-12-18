#include<bits/stdc++.h>

using namespace std;
int cnt=1;

int main()
{
	int matrix[100][100];
	
	int test,n,r,d,s,x,y,max;
	
	cin>>test;
	
	while(test--)
	{
		max=0;
		cin>>n>>r;
		
		for(int i=0;i<n;i++)
	    for(int j=0;j<n;j++)
	   {
		if(i==j)
		matrix[i][j]=0;
		else
		matrix[i][j]=100;
	   }
		for(int i=0;i<r;i++)
		{
			cin>>x>>y;
			matrix[x][y]=1;
			matrix[y][x]=1;
			
		}
		
		for(int k=0;k<n;k++)
		for(int i=0;i<n;i++)
		for(int j=0;j<n;j++)
		{
			if(matrix[i][j]>(matrix[i][k]+matrix[k][j]))
			matrix[i][j]=matrix[i][k]+matrix[k][j];
		}
		
		cin>>s>>d;
		
		for(int i=0;i<n;i++)
		{
		   if(matrix[s][i]+matrix[i][d]>max)
		   {
		   	max=matrix[s][i]+matrix[i][d];
		   }
			
		}
		
		printf("Case %d: %d\n",cnt++,max);
	}
	return 0;
}
