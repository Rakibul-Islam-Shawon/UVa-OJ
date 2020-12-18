#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
	int t,count=1;
	int x[4],swap;
	cin>>t;
	while(count<=t)
	{
		int t_case=1;
		
		for(int i=0;i<3;i++)
		scanf("%d",&x[i]);
		
		
		for(int i=0;i<3-1;i++)
	{
		for(int j=0;j<3-i-1;j++)
		{
			if(x[j]>x[j+1])
			{
			
			swap=x[j+1];
		    x[j+1]=x[j];
		    x[j]=swap;
		}
		}
	}
	
	
	printf("Case %d: %d\n",count,x[1]);
	
	count++;			
	}
	
	return 0;
	
}
