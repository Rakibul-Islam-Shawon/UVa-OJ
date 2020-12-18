#include<bits/stdc++.h>
using namespace std;

bool color[105][105];
int grid[105][105];
int row,col,key,cnt;
map<int,int>ans;
void dfs(int i,int j)
{
	if(i<=0 or j<=0 or i>row or j>col or color[i][j]==1 or grid[i][j]!=key) return ;
	
	color[i][j]=1;
	cnt++;
	dfs(i-1,j);
	dfs(i,j+1);
	dfs(i,j-1);
	dfs(i+1,j);
	
}

int main()
{
	int test,x,y,n;
string input,temp;
stringstream sso;
	while(scanf("%d",&n)==1)
	{
		
		if(n==0) return 0;
		row=n;
		col=n;
		memset(grid,0,sizeof(grid));
		getchar();
		for(int i=1;i<=row-1;i++)
		{
			
		  getline(cin,input);
		   sso<<input;
		   while(sso)
		   {
		
		   	  sso>>x;
		   	  sso>>y;
		   	  grid[x][y]=i;
		   }
	      sso.clear();
		}
		
		bool flag=false,t=false;
	
	    int save;
	    for(int i=1;i<=row;i++)
	    {
	      for(int j=1;j<=col;j++)
		{
			key=grid[i][j];
			
			if(color[i][j]==0)
			{
				ans[key]++;
				cnt=0;
				dfs(i,j);

				if(t==false)
				{
					save=cnt;
					t=true;
				}
			   
			}
			if(save!=cnt or ans[key]>1)
			{
			printf("wrong\n");
			flag=true;
			break;	
			}
				
		}
		 
		 if(flag==true)
		 break;	
	    }
		
		if(flag==false)
		printf("good\n");
   	    
   	    memset(color,0,sizeof(color));
   	   ans.clear();
	}
   	
	return 0;
}
