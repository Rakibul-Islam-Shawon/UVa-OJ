#include<bits/stdc++.h>

int main()

{
	long long x,y,test,div,temp,raf,raftemp,steps,sum,j;
	
	scanf("%lld",&test);
	while(test--)
	{
		
		scanf("%lld %lld",&x,&y);
		if(y-x==0)
		printf("0\n");
		else if(y-x==1)
		printf("1\n");
		else
		{
		temp=y-x;
		div=temp/2;
		long long i=1;
		while(1)
		{
			raf=i*(i+1)/2;
			if(raf>div)
			{
			break;	
			}
			
			raftemp=raf;
			steps=i;
			i++;
		}
		sum=raftemp*2;
		j=steps;
		steps*=2;
	if(temp-sum==0)
	printf("%lld\n",steps);
	else
	{
	for(i=j+1; ;i--)	
	{
		if(sum+i<=temp)
		{
			sum+=i;
			steps++;
			if(sum==temp)
			break;
		}
		
	}
	printf("%lld\n",steps);	
	}	
		}
		
	
	}
	return 0;
}
