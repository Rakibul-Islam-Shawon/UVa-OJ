#include<bits/stdc++.h>

using namespace std;

void algo(int m)
{
	
	for(int i=1;i<=m;i++)
	{
		for(int j=1;j<=i;j++)
		{
			printf("%d",i);
		}
		printf("\n");
	}
	for(int i=m-1;i>=1;i--)
	{
		for(int j=1;j<=i;j++)
		{
			printf("%d",i);
		}
		printf("\n");
	}
	
	return ;
}
int main()
{
	bool flag=false;
	int test,m,n;
	cin>>test;
	while(test--)
	{
		
		scanf("%d%d",&m,&n);
		
		for(int i=1;i<=n;i++)
		{
			algo(m);
		    
		    if(i!=n)
			printf("\n");
		}
		if(test)
		printf("\n");
	}
	
	return 0;
}
