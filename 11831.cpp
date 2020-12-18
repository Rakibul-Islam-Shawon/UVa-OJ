#include<bits/stdc++.h>
using namespace std;

int main()
{
	string str;
	char dirc;
	int n,m,s,x,y;
	char graph[101+5][101+5];
	while(cin>>n>>m>>s)
	{
		if(n==0 and m==0 and s==0)
		break;
		
		int cnt=0;
		
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<m;j++)
			{
			   cin>>graph[i][j];
			   if(isalpha(graph[i][j]))
			   {
			   	x=i;
			   	y=j;
			   	dirc=graph[i][j];
			   }	
			}
			
		}
		
	    cin>>str;

	char now;
	for(int i=0;i<str.size();i++)
		{
			now=str[i];
			if(dirc=='L')
			{
				if(now=='D')
				{
					dirc='S';
				}
				else if(now=='E')
				{
	
					dirc='N';
				}
			}
			else if(dirc=='O')
			{
				if(now=='D')
				{
					dirc='N';
				}
				else if(now=='E')
				{
					dirc='S';
				}
			}
			else if(dirc=='N')
			{
				if(now=='D')
				{
					dirc='L';
				}
				else if(now=='E')
				{
					dirc='O';
				}
			}
			else
			{
				if(now=='D')
				{
				   dirc='O';
				}
				else if(now=='E')
				{
					dirc='L';
				}
			}
			
			if(now=='F')
			{
				if(dirc=='L' and x>=0 and x<n and (y+1)>=0 and (y+1)<m)
				{
					if(graph[x][y+1]=='*')
					{
						cnt++;
						y++;
						graph[x][y]='.';
					}
					else if(graph[x][y+1]!='#')
					{	
			          	y++;
					}
					
				}
				else if(dirc=='O' and x>=0 and x<n and (y-1)>=0 and (y-1)<m)
				{
					if(graph[x][y-1]=='*')
					{
						cnt++;
						y--;
						graph[x][y]='.';
					}
					else if(graph[x][y-1]!='#')
					y--;
				}
				else if(dirc=='N' and (x-1)>=0 and (x-1)<n and y>=0 and y<m)
				{
					if(graph[x-1][y]=='*')
					{
						cnt++;
					    x--;
						graph[x][y]='.';	
					}
					else if(graph[x-1][y]!='#')
					x--;
				}
				else if(dirc=='S' and (x+1)>=0 and (x+1)<n and y>=0 and y<m)
				{
					if(graph[x+1][y]=='*')
					{
						cnt++;
					    x++;
						graph[x][y]='.';	
					}
					else if(graph[x+1][y]!='#')
					x++;
				}
			}
		}
		
		cout<<cnt<<endl;
	
	}
	return 0;
}
