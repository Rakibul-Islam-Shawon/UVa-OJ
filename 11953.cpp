#include<bits/stdc++.h>
using namespace std;

bool color[105][105];
char grid[105][105];
int row,col,cnt,p=1;

void dfs(int i,int j)
{
	if(i<0 or j<0 or i>=row or j>=col or color[i][j]==1 or grid[i][j]=='.') return ;
	
	color[i][j]=1;
	
	dfs(i-1,j);
	dfs(i,j+1);
	dfs(i,j-1);
	dfs(i+1,j);
	
}

int main()
{
	char input;
	int test,x,y;
	cin>>test;

	while(test--)
	{
		cin>>row;
		getchar();
		col=row;
		for(int i=0;i<row;i++)
		for(int j=0;j<col;j++)
		{
			cin>>input;
			grid[i][j]=input;
			
		}
	    cnt=0;
	    for(int i=0;i<row;i++)
		for(int j=0;j<col;j++)
		{
			if(grid[i][j]=='x' and color[i][j]==0)
			{
				dfs(i,j);
				cnt++;
			}
			
			
		}
		
   	    printf("Case %d: %d\n",p++,cnt);
   	    memset(color,0,sizeof(color));
   	   
	}
   	
	return 0;
}
