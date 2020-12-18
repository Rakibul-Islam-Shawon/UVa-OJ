#include<bits/stdc++.h>
int main()
{
	int n;
	
	long long ans;
	while(scanf("%d",&n)!=EOF)
	{
		if(n==0)
		return 0;
		ans=0;
		for(int i=1;i<=n;i++)
		{
			ans+=i*i;
		}
		
		printf("%lld\n",ans);
		
	}
	

}
