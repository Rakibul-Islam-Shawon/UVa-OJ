#include<bits/stdc++.h>

int main()
{
	long long test,n,k,temp;
	
	scanf("%lld",&test);
		while(test--)
	{
		scanf("%lld",&k);
		if(k==0)
		{
			printf("3\n");
		}
		else
		{
			if(k<0)
		k=abs(k);
		for(long long i=1; ;)
		{
			temp=i*(i+1)/2;
			if(temp>=k and (temp-k)%2==0)
			{
				n=i;
				break;
			}
			i++;
		}
		printf("%lld\n",n);
		
		}
		if(test)
		putchar('\n');
	}
	
	return 0;
}




