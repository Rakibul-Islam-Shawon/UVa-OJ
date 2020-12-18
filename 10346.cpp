#include<stdio.h>
int main()
{
	
	
	long long n,k,exp,ans,mod;
	while(scanf("%lld %lld",&n,&k)==2)
	{
	 ans=0;
		while(n>=k)
	
	{
	if(n>=k)
	{
	mod=n%k;
	n=n/k;
	ans+=k*n;
	
	n=n+mod;	
		
		
	}	
		
	
}
	ans=ans+n;
	printf("%lld\n",ans);
	
	}
		
	return 0;
	
}
