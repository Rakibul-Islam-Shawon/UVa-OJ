#include<stdio.h>
#include<iostream>
using namespace std;
int x[10001];
int main()
{
	int t,count=1,n;
	int swap;
	cin>>t;
	while(count<=t)
	{
		cin>>n;
		for(int i=0;i<n;i++)
		scanf("%d",&x[i]);
		
		
		for(int i=0;i<n-1;i++)
	{
		for(int j=0;j<n-i-1;j++)
		{
			if(x[j]>x[j+1])
			{
			
			swap=x[j+1];
		    x[j+1]=x[j];
		    x[j]=swap;
		}
		}
	}
	
	
	printf("Case %d: %d\n",count,x[n-1]);
	
	count++;			
	}
	
	return 0;
	
}
