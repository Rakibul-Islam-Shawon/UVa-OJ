#include<bits/stdc++.h>
using namespace std;
int arra[11][11];


void col(int a,int b,int n)
{
	a--;
	b--;
		int temp;
		
		for(int i=0;i<n;i++)
		{
			
			temp=arra[i][a];
			arra[i][a]=arra[i][b];
			arra[i][b]=temp;
		}
	return ;
}

void row(int a,int b,int n)
{
	a--;
	b--;
		int temp;
		
		for(int i=0;i<n;i++)
		{
			
			temp=arra[a][i];
			arra[a][i]=arra[b][i];
			arra[b][i]=temp;
		}
	return ;
}

void inc(int n)
{
	int temp;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			temp=arra[i][j]+1;
			if(temp==10)
			temp=0;
			arra[i][j]=temp;
			
		}
	}
	
}
void dec(int n)
{
	int temp;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			temp=arra[i][j]-1;
			if(temp==-1)
			temp=9;
			arra[i][j]=temp;
			
		}
	}
	
}

void trans(int n)
{
	int temp;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(i<=j)
			{
			temp=arra[i][j];
			arra[i][j]=arra[j][i];
			arra[j][i]=temp;	
			}
		}
	}
}
int main()
{
	char  token[256],line[256];
  
	int test,n,m,a,b,count=1;
	char str[11][11];
	
	gets(line);
    sscanf(line, "%d", &test);
	
	while(test--)
	{
		gets(line);
        sscanf (line, "%d", &n);
		
		for(int i=0;i<n;i++)
	{
		gets(str[i]);
		
	}

		for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			arra[i][j]=str[i][j]-48;
			
		}
	
	}
		
	gets(line);
    sscanf(line, "%d", &m);
	while(m--)
	{
		gets(line);
        sscanf(line, "%s %d %d", token, &a, &b);
	    
		if(strcmp(token,"row")==0)
		{
			row(a,b,n);
		}
		else if(strcmp(token,"col")==0)
		{
			col(a,b,n);
		}
		else if(strcmp(token,"inc")==0)
		{
			inc(n);
		}
		else if(strcmp(token,"dec")==0)
		{
			dec(n);
		}
		else if(strcmp(token,"transpose")==0)
		{
			trans(n);
		}
		
	}
	printf("Case #%d\n",count++);
				for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			printf("%d",arra[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	}
	
	return 0;
}
