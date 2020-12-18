#include<stdio.h>
#include<math.h>


int gcd(int a,int b)
{
	int rem;
		while(1)
		{
			rem=a%b;
			if(rem==0)
			{
				
				return b;
			}
			a=b;
			b=rem;
			
		}
		
}

int main()
{
	int step,mod;
	
	while(scanf("%d %d",&step,&mod)==2)
	{
		
		if(mod==0)
		{
			if(step==1)
			printf("%10d%10d    Good Choice\n\n",step,mod);
			else
			printf("%10d%10d    Bad Choice\n\n",step,mod);
		}
		
		else if(gcd(step,mod)==1)
		{
			printf("%10d%10d    Good Choice\n\n",step,mod);
		}
		else
		printf("%10d%10d    Bad Choice\n\n",step,mod);
	}
	return 0;
}

