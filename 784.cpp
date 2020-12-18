#include<bits/stdc++.h>
using namespace std;

bool color[85][85];
char key;
vector<string>grid; 

int row,col;

void dfs(int i,int j)
{
	if(color[i][j]==1 or grid[i][j]==key) return ;
	
	color[i][j]=1;
	grid[i][j]='#';
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
	getchar();
	while(test--)
	{
		int row=0;
		while(1)
		{
			getline(cin,input);
			if(input[0]=='_')
			break;
			grid.push_back(input);
		    row++;  
		}
	    
	    for(int i=0;i<row;i++)
	    for(int j=0;j<grid[i].size();j++)
	    {
	    	if(grid[i][j]=='*')
	    	{
	    		x=i;
	    		y=j;
	    	}
	    	else if(grid[i][j]!='*' and grid[i][j]!=' ')
	    	{
	    		key=grid[i][j];
	    	}
	    	
	    }
	    
	    grid[x][y]='#';
	    
	    dfs(x,y);
	    
	    for(int i=0;i<row;i++)
	    {
	    	for(int j=0;j<grid[i].size();j++)
	    	{
	    		cout<<grid[i][j];
	    	}
	    	cout<<endl;
	    }
	    cout<<input<<endl;
	    
	    grid.clear();
	    memset(color,0,sizeof(color));
	    
	}
	
	return 0;
}
