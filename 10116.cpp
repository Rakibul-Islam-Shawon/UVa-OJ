#include<bits/stdc++.h>
char arra[15][15];
bool visited[15][15],visit[15][15];

using namespace std;

int main()
{
	
	int row,col,pos,tx,ty,cnt,x,y;
	char token;
	while(scanf("%d %d %d",&row,&col,&pos)==3)
	{
		getchar();
		bool flag=false;
		if(row==0 and col==0 and pos==0) return 0;
		
		for(int i=0;i<row;i++)
		for(int j=0;j<col;j++)
		{
			cin>>token;
			arra[i][j]=token;
		}
		
		pos--;
		cnt=0;
		tx=0;
		ty=pos;
		
		
		while(tx>=0 and tx<row and ty>=0 and ty<col)
		{
				
			if(arra[tx][ty]=='E')
			{
				   visited[tx][ty]=true;
				    ty++;
					cnt++;
			}
			else if(arra[tx][ty]=='W')
			{
				visited[tx][ty]=true;
				    ty--;
					cnt++;
			}
			else if(arra[tx][ty]=='N')
			{
				visited[tx][ty]=true;
				    tx--;
					cnt++;
			}
			else
			{
				visited[tx][ty]=true;
				     tx++;
					cnt++;
			}
			
			if(visited[tx][ty]==true) 
			{
				x=tx;
				y=ty;
				flag=true;
				break;
			}
		}
		int p=0;
		if(flag==true)
		{
			while(visit[x][y]!=true)
			{
			if(arra[x][y]=='E')
			{
				   visit[x][y]=true;
				    y++;
					p++;
			}
			else if(arra[x][y]=='W')
			{
				visit[x][y]=true;
				    y--;
					p++;
			}
			else if(arra[x][y]=='N')
			{
				visit[x][y]=true;
				    x--;
					p++;
			}
			else
			{
				visit[x][y]=true;
				     x++;
					p++;
			}	
			}
			
		}
	    if(flag==true)
		printf("%d step(s) before a loop of %d step(s)\n",cnt-p,p);
		else
		printf("%d step(s) to exit\n",cnt);
		
		memset(visit,0,sizeof(visit));
		memset(visited,0,sizeof(visited));
	}
}
