#include<bits/stdc++.h>

int main()
{
	int n,temp,ans;
	
	while(scanf("%d",&n)!=EOF)
	{
		if(n==0)
		return 0;
		int k=1;
		while(k<=n)
		{
			k=k*2;
			temp=k%n;
		}
		
		ans=n-temp;
		printf("%d\n",ans);
	}
}
