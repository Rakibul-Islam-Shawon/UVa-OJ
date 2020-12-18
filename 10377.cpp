#include<bits/stdc++.h>
using namespace std;

int main()
{
    bool flag=false;
	string str;
	int test,row,col,x,y;
	char graph[62][62];
	cin>>test;
	char ch,dirc,now;
	while(test--)
	{
		
		cin>>row>>col;
		getchar();
		for(int i=0;i<row;i++)
		{
			gets(graph[i]);
		}
		
		cin>>x>>y;
		x--;
		y--;
		getchar();
		str="";
		while(ch=getchar())
		{
			
			if(isalpha(ch))
			{
				str+=ch;
			}
			
			if(ch=='Q')
			break;
		}
		
		dirc='N';
		for(int i=0;i<str.size();i++)
		{
			now=str[i];
			if(dirc=='E')
			{
				if(now=='R')
				{
					dirc='S';
				}
				else if(now=='L')
				{
	
					dirc='N';
				}
			}
			else if(dirc=='W')
			{
				if(now=='R')
				{
					dirc='N';
				}
				else if(now=='L')
				{
					dirc='S';
				}
			}
			else if(dirc=='N')
			{
				if(now=='R')
				{
					dirc='E';
				}
				else if(now=='L')
				{
					dirc='W';
				}
			}
			else
			{
				if(now=='R')
				{
				   dirc='W';
				}
				else if(now=='L')
				{
					dirc='E';
				}
			}
			
			if(now=='F')
			{
				if(dirc=='E')
				{
					if(graph[x][y+1]!='*')
					{	
			          	y++;
					}
					
				}
				else if(dirc=='W')
				{
					if(graph[x][y-1]!='*')
					y--;
				}
				else if(dirc=='N')
				{
					if(graph[x-1][y]!='*')
					x--;
				}
				else
				{
					if(graph[x+1][y]!='*')
					x++;
				}
			}
		}
		x++;
		y++;
		
		if(x<1)
		x=1;
		if(x>row)
		x=row;
		if(y<1)
		y=1;
		if(y>col)
		y=col;
		if(flag==true)
		cout<<endl;
		cout<<x<<" "<<y<<" "<<dirc<<endl;
		flag=true;
	}
	return 0;
}
