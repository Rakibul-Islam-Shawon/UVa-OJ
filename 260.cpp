#include<bits/stdc++.h>
using namespace std;

int n,cnt=1;
bool black,white;

bool color[205][205];
char grid[205][205];

void dfs_black(int i,int j)
{
	if(i<0 or j<0 or i>=n or j>=n or grid[i][j]!='b' or color[i][j]!=0) return ;
	
	color[i][j]=1;
	if(i==(n-1))
	 { 
	 black=true;
	 }
	dfs_black(i-1,j);
	dfs_black(i,j+1);
	dfs_black(i,j-1);
	dfs_black(i+1,j);
	dfs_black(i-1,j-1);
	dfs_black(i+1,j+1);
}

void dfs_white(int i,int j)
{

	if(i<0 or j<0 or i>=n or j>=n or grid[i][j]!='w' or color[i][j]!=0) return ;
      
      color[i][j]=1;
      if(j==(n-1))
      {
      	white=true;
      }
	dfs_white(i-1,j);
	dfs_white(i,j+1);
	dfs_white(i,j-1);
	dfs_white(i+1,j);
	dfs_white(i-1,j-1);
	dfs_white(i+1,j+1);
	
}


int main()
{
	
	char input;
	
	while(cin>>n)
	{
		
		if(n==0) 
		return 0;
		for(int i=0;i<n;i++)
		for(int j=0;j<n;j++)
		{
				cin>>input;
				grid[i][j]=input;
	
		}
		
		black=false;
		
		for(int i=0;i<1;i++)
		for(int j=0;j<n;j++)
		{
			if(grid[i][j]=='b')
			{
				dfs_black(i,j);
				
			if(black==true)
		    {
			printf("%d B\n",cnt++);
			break;
		    }
		     memset(color,0,sizeof(grid));
			}
		}
		
		if(black!=true)
		{

			white=false;
		
		for(int i=0;i<n;i++)
		{
			
			if(grid[i][0]=='w')
			{
				dfs_white(i,0);
				
				if(white==true)
		       {
		       	
		     	printf("%d W\n",cnt++);
			    break;
		      }
		      memset(color,0,sizeof(grid));
			}
			
		}
		
		}
		
	}
}
