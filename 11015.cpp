#include<bits/stdc++.h>

using namespace std;

int cnt=1;

int main()
{
	string arra[22];
	int n,m,x,y,cost,key;
	int matrix[23][23];
	while(1)
	{
		cin>>n>>m;
		if(n==0)
		return 0;
		
		for(int i=1;i<=n;i++)
		for(int j=1;j<=n;j++)
		{
			if(i==j)
			matrix[i][j]=0;
			else
			matrix[i][j]=232;
		}
		getchar();
		for(int i=0;i<n;i++)
		{
			cin>>arra[i];
		}
		for(int i=0;i<m;i++)
		{
			cin>>x>>y>>cost;
			matrix[x][y]=cost;
			matrix[y][x]=cost;
			
		}
		
		for(int k=1;k<=n;k++)
		for(int i=1;i<=n;i++)
		for(int j=1;j<=n;j++)
		{
			if(matrix[i][j]>(matrix[i][k]+matrix[k][j]))
			{
				matrix[i][j]=matrix[i][k]+matrix[k][j];
			}
			
		}
		int sum,max=10000;
		
		for(int i=1;i<=n;i++)
        {
        	sum=0;
        	for(int j=1;j<=n;j++)
        	{
        			sum+=matrix[i][j];	
        	}
        	if(sum<max)
        	{
        		max=sum;
        		key=i;
        	}
        	
        }
        printf("Case #%d : ",cnt++);
        cout<<arra[key-1]<<endl;
	}
}
