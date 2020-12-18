#include<bits/stdc++.h>
using namespace std;

bool color[35][35];
vector<string>grid;
vector<int>ans;
int row,col,cnt;
void dfs(int i,int j)
{
	if(i<0 or j<0 or i>=row or j>=col or color[i][j]==1 or grid[i][j]!='1') return ;
	
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
	string input;
	int test;
	cin>>test;
	bool flag=false;
	getchar();
	getchar();
	while(test--)
	{
		row=0;
		while(getline(cin,input))
		{
			if(input=="")
			break;
			grid.push_back(input);
			row++;
		}
		col=grid[0].size();
		for(int i=0;i<row;i++)
   	    for(int j=0;j<col;j++)
   	    {
   	    		cnt=0;
   	    		ans.push_back(cnt);
 	     if(grid[i][j]=='1' and color[i][j]==0)
 	     {
 	   	   dfs(i,j);
 	   	   ans.push_back(cnt);
 	     }
 	
   	    }
   	    if(flag==true)
   	    printf("\n");
   	    sort(ans.begin(),ans.end());
   	    cout<<ans[ans.size()-1]<<endl;
   	    flag=true;
   	    ans.clear();
   	    memset(color,0,sizeof(color));
   	    grid.clear();
	}
   	
	return 0;
}
