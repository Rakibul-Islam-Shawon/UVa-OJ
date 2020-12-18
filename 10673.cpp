#include<stdio.h>
#include<math.h>
#include<iostream>
using namespace std;

int main()
{
	float x,k;
	long long int p,q,a,b,test;
	scanf("%d",&test);
	
	while(test--)
	{
		
		scanf("%f %f",&x,&k);
		
		a=floor(x/k);
		b=ceil(x/k);
		
		for(p=0;p*a<=x;p++)
		{
			for(q=0;q*b<=x;q++)
			{
				if(a*p+b*q==x)
				break;
				
				
			}
			if(a*p+b*q==x)
				break;
			
		}
		
		printf("%lld %lld\n",p,q);
	}
	return 0;
}
