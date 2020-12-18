#include<bits/stdc++.h>
using namespace std;

bool color[105][105];
char grid[105][105];

int row,col,cnt;
void dfs(int i,int j)
{
	if(i<0 or j<0 or i>=row or j>=col or color[i][j]==1 or grid[i][j]!='*') return ;
	
	color[i][j]=1;
	cnt++;
	dfs(i-1,j);
	dfs(i,j+1);
	dfs(i,j-1);
	dfs(i+1,j);
	dfs(i-1,j+1);
	dfs(i-1,j-1);
	dfs(i+1,j-1);
	dfs(i+1,j+1);
}

int main()
{
	char input;
	int test,star;
	
	while(scanf("%d %d",&row,&col)==2)
	{
	    if(row==0 and col==0) return 0;
	    
		   star=0;
		for(int i=0;i<row;i++)
		for(int j=0;j<col;j++)
		{
			cin>>input;
			grid[i][j]=input;
			
		}
		
		for(int i=0;i<row;i++)
   	    for(int j=0;j<col;j++)
   	    {
   	    		cnt=0;
   	    		
 	     if(grid[i][j]=='*' and color[i][j]==0)
 	     {
 	   	   dfs(i,j);
 	   	   if(cnt==1)
 	   	   star++;
 	     }
 	
   	    }
   	    cout<<star<<endl;
   	    
   	    memset(color,0,sizeof(color));
   	    
	}
   	
	return 0;
}
