#include<bits/stdc++.h>
int main()
{
	int n,sum,main;
	
	while(scanf("%d",&n)!=EOF)
	{
		
		if(n==2)
		printf("1\n");
		else if(n==1)
		printf("0\n");
		else
		{
			if(n==0)
		return 0;
		sum=0;
	while(1)
	{
		if(n<3)
		break;
	sum+=n/3;
	n=n/3+n%3;	
	}
	if(n==2)
	printf("%d\n",sum+1);
	else
	printf("%d\n",sum);
		}
		
	}
	
	return 0;
}
