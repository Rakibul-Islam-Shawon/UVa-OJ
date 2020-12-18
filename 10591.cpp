#include<bits/stdc++.h>

int main()
{
	long long test,count=1,N,sum,temp,b,p;
	
	scanf("%lld",&test);
	
	while(test--)
	{
		
		scanf("%lld",&N);
		b=N;
		while(1)
		{
			sum=0;
		
				while(b!=0)
		{
			temp=b%10;	
		     sum+=(temp*temp);
		     b=b/10;	
		}
		   b=sum;
			if(b==N || b==1)
			break;
			else if(b==0||b==1||b==4||b==16)	
			break;
			else if(b==20||b==37||b==42||b==58||b==89||b==145)
			break;	
		}
		
		if(b==1)
		printf("Case #%lld: %lld is a Happy number.\n",count++,N);
		else
		printf("Case #%lld: %lld is an Unhappy number.\n",count++,N);
		
	}
	
	return 0;
}
