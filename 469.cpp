#include<bits/stdc++.h>
using namespace std;

bool color[105][105];
vector<string>grid;

int row,col,cnt;

void dfs(int i,int j)
{
	if(i<0 or j<0 or i>=row or j>=col or color[i][j]==1 or grid[i][j]!='W') return ;
	
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

	int test,sx,sy;
	string temp,input;
	stringstream sso;
	cin>>test;
	getchar();
	getchar();
	while(test--)
	{
		row=0;
		while(getline(cin,input))
	{
	    if(input[0]!='L' and input[0]!='W')
	    break;		
		col=input.size();	
		grid.push_back(input);
		row++;
		
	}
	           
                cnt=0;	
	            sso<<input;
				sso>>sx>>sy;
				sso.clear();
				dfs(sx-1,sy-1);
				cout<<cnt<<endl;
				memset(color,0,sizeof(color));
				
	  while(getline(cin,input))
	  {
	    if(input=="")
	    break;
	    else
	    {
	    	    cnt=0;
	    	    sso<<input;
				sso>>sx>>sy;
				sso.clear();
				dfs(sx-1,sy-1);
				cout<<cnt<<endl;
				memset(color,0,sizeof(color));
	    }
	  }	
	  grid.clear();
	  if(test)
	   printf("\n");
	  
	  
   }
   return 0;
}
