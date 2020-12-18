#include<bits/stdc++.h>
using namespace std;

bool matrix[51][51];
int main()
{
	memset(matrix,false,sizeof(matrix));
	
	int n,m,x,y,temp1,temp2;
	char dirc,now,temp;
	string input;
	cin>>n>>m;
	
	while(cin>>x>>y>>dirc)
	{
		getchar();
		getline(cin,input);
		bool flag=false;
		for(int i=0;i<input.size();i++)
		{
			temp1=x;
			temp2=y;
			now=input[i];
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
					x++;
				}
				else if(dirc=='W')
				{
					x--;
				}
				else if(dirc=='N')
				{
					y++;
				}
				else
				{
					y--;
				}
				if(x<0 or x>n or y<0 or y>m)
				{
					if(matrix[temp1][temp2]!=true)
					{
						matrix[temp1][temp2]=true;
						x=temp1;
						y=temp2;
						flag=true;
						break;
					}
					else
					{
						x=temp1;
						y=temp2;
					}
					
				}
			}
			
			
		}
		if(flag==true)
		cout<<x<<" "<<y<<" "<<dirc<<" "<<"LOST"<<endl;
		else
		 cout<<x<<" "<<y<<" "<<dirc<<endl;
	}
	return 0;
}
