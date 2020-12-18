#include<bits/stdc++.h>

int main()
{
	
	long long member,day,i,sum;
	
	while(scanf("%lld %lld",&member,&day)!=EOF)
	{
	   sum=0;	
		for(i=member; ;i++)
		{
			sum+=i;
			if(sum>=day)
			break;
		}
		printf("%lld\n",i);
	}
	return 0;
}
