#include<bits/stdc++.h>
using namespace std;

char par[200];

void makeset(char n)
{
par[n]=n;

return ;	
}

char find(char r)
{
	if(par[r]!=r)
	par[r]=find(par[r]);
	
	return par[r];
}

	void uni(char a,char b)
	{
		char u,v;
	  u=find(a);
	  v=find(b);
	  
	    if (u!=v) 
		par[u]=v;
	     
		return ;	
	}
	
int main()
{
	bool flag=false;
	int test;
	char max,x,y;
	string input;
	cin>>test;
	getchar();
	getchar();
	while(test--)
	{
		cin>>max;
		for(int i=65;i<=(int)max;i++)
		{
			makeset(i);
		}
		getchar();
		while(getline(cin,input))
		{
			if(input.size()==0)
			break;
	        x=input[0];
	        y=input[1];
	        uni(x,y);
		}
		bool visited[100]={0};
		int cnt=0;
		for(int i=65;i<=(int)max;i++)
		{
			char temp=find(i);
			if(visited[par[i]]!=1)
			{
				
				cnt++;
				visited[par[i]]=1;
			}
			
		}
		if(flag==true)
		printf("\n");
		printf("%d\n",cnt);
	
		flag=true;
		
	}
	
	return 0;
}
