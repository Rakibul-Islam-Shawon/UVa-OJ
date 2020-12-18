#include<bits/stdc++.h>
using namespace std;

bool color[85][85];
char key;
char colour;
vector<string>grid; 

int row,col;

void dfs(int i,int j)
{
	if(color[i][j]==1 or grid[i][j]==key) return ;
	
	color[i][j]=1;
	grid[i][j]=colour;
	dfs(i-1,j);
	dfs(i,j+1);
	dfs(i,j-1);
	dfs(i+1,j);
	
}

int main()
{
	string input;

	while(1)
	{
		int row=0;
		while(getline(cin,input))
		{  
			if(input[0]=='_')
			break;
			grid.push_back(input);
		    row++;  
		}
		if(input[0]!='_') return 0;
	    bool flag=false;
	    for(int i=0;i<row;i++)
	    for(int j=0;j<grid[i].size();j++)
	    {
	    	if(flag==false)
	    	{
	    		
	    	if(grid[i][j]!='_' and grid[i][j]!=' ')
	    	{
	    		key=grid[i][j];
	    		flag=true;
	    	}
				
	    	}
	    	
	    	else
	    	{
	    		if(grid[i][j]!=key and grid[i][j]!=' ')
	    		{
	    			colour=grid[i][j];
	    			
	    			dfs(i,j);
	    		}
	    		
	    	}
	    }
	    
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
