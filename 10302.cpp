#include<bits/stdc++.h>


int main()
{
	
	int n;
	
	unsigned long long sum,i;
	while(scanf("%d",&n)!=EOF)
	{
		sum=0;
		for(i=1;i<=n;i++)
		sum+=(i*i*i);
		
		printf("%llu\n",sum);
	}
	return 0;
}
