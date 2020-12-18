#include<stdio.h>
int main()
{
	 
	 unsigned long long max,ans;
	 long long int n;
	
	while(scanf("%lld",&n)==1)
	{
		if(n<0)
		return 0;
		max=n*(n+1);
		ans=(max/2)+1;
		printf("%llu\n",ans);
		
		
	}
	return 0;
}
