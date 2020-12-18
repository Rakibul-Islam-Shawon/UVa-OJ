#include<bits/stdc++.h>
int main()
{
	
	int n,temp,div,flag,i,main,count;
	float sqrtN;
	while(scanf("%d",&n)==1)
	{
		main=n;
		flag=0;
		if(n<0)
		return 0;
		sqrtN=ceil(sqrt(n));
		
		for(i=(int)sqrtN;i>1;i--)
		{
			n=main,count=0;
			while(1)
			{
				if(n%i!=1)
				{	
					break;
				}
				temp=n%i;
				div=n/i;
				n=n-n/i-n%i;
				flag=1;
				count++;
			}
			if(flag==1)
			{
				if(n%i==0 and count==i)
					{
							printf("%d coconuts, %d people and 1 monkey\n",main,i);
							break;
					}
			}
			
			
		}
		
	if(i==1 || main==0)
	printf("%d coconuts, no solution\n",main);
		
		
	}
	
	return 0;
}
