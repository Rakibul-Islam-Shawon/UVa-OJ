#include<stdio.h>
int main()
{
	unsigned a,b;
	unsigned long long ans;
	while(scanf("%u %u",&a,&b)!=EOF)
	{
		ans=a^b;
		printf("%llu\n",ans);	
	}
	
	return 0;
	
}
