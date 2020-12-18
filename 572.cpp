#include<bits/stdc++.h>
using namespace std;

bool color[105][105];
char grid[105][105];

int row,col;
void dfs(int i,int j)
{
	if(i<0 or j<0 or i>=row or j>=col or color[i][j]==1 or grid[i][j]!='@') return ;
	
	color[i][j]=1;
	
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
	
   while(cin>>row>>col)
   {
   	if(row==0) return 0;
   	
   	for(int i=0;i<row;i++)
   	for(int j=0;j<col;j++)
   	{
   		cin>>input;
   	   grid[i][j]=input;	
   	   	
   		
   	}
   	int cnt=0;
   	for(int i=0;i<row;i++)
   	for(int j=0;j<col;j++)
   	{
 	   if(grid[i][j]=='@' and color[i][j]==0)
 	   {
 	   	cnt++;
 	   	dfs(i,j);
 	   }
   	   	
   		
   	}
   	
   	cout<<cnt<<endl;
   	
   	memset(grid,0,sizeof(grid));
   	memset(color,0,sizeof(color));
   }	
	
}
