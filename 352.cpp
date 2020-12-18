#include<bits/stdc++.h>
using namespace std;

bool color[35][35];
char grid[35][35];

int dimention,p=1;
void dfs(int i,int j)
{
	if(i<0 or j<0 or i>=dimention or j>=dimention or color[i][j]==1 or grid[i][j]!='1') return ;
	
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
	
   while(cin>>dimention)
   {
   	
   	for(int i=0;i<dimention;i++)
   	for(int j=0;j<dimention;j++)
   	{
   		cin>>input;
   	   grid[i][j]=input;	
   	   	
   		
   	}
   	int cnt=0;
   	for(int i=0;i<dimention;i++)
   	for(int j=0;j<dimention;j++)
   	{
 	   if(grid[i][j]=='1' and color[i][j]==0)
 	   {
 	   	cnt++;
 	   	dfs(i,j);
 	   }
   	   	
   		
   	}
   	
   	printf("Image number %d contains %d war eagles.\n",p++,cnt);
   	
   	memset(grid,0,sizeof(grid));
   	memset(color,0,sizeof(color));
   }	
	
}
