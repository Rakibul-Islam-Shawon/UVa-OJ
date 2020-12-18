#include<bits/stdc++.h>
using namespace std;

bool color[100][100];
vector<string>grid;
int row,col,cnt;
void dfs(int i,int j)
{
	if(i<0 or j<0 or i>=row or j>=col or color[i][j]==1 or grid[i][j]!='0') return ;
	
	color[i][j]=1;
	cnt++;
	dfs(i-1,j);
	dfs(i,j+1);
	dfs(i,j-1);
	dfs(i+1,j);
	
}

int main()
{
	string input;
	int test,x,y;
	cin>>test;
	bool flag=false;

	while(test--)
	{
		row=0;
		scanf("%d %d",&x,&y);
		getchar();
		while(getline(cin,input))
		{
			if(input=="")
			break;
			grid.push_back(input);
			row++;
		}
		col=grid[0].size();
		cnt=0;
		dfs(x-1,y-1);
		
   	    if(flag==true)
   	    printf("\n");
   	    printf("%d\n",cnt);
   	    flag=true;
   	    memset(color,0,sizeof(color));
   	    grid.clear();
	}
   	
	return 0;
}
