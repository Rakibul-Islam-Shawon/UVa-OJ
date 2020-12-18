#include<bits/stdc++.h>
int main()
{
	int n,sum;
	
	while(scanf("%d",&n)!=EOF)
	{
		sum=n;
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
	
	return 0;
}
