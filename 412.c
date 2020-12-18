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
	int array[54],n,swap,pos,count,i,j,save,k;
	double PI,r;
	while(1)
	{
		pos=0,count=0,save=0;
		scanf("%d",&n);
		if(n==0)
		return 0;
		for(i=0;i<n;i++)
		scanf("%d",&array[i]);
		for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(array[j]>array[j+1])
			{
			
			swap=array[j+1];
			array[j+1]=array[j];
			array[j]=swap;
		}
		}
	}
		for(i=0;i<n-1;i++)
		{
			for(j=i+1;j<n;j++)
			{
				if(gcd(array[i],array[j])==1)
				{
					
					save++;
				}
				
			
			count++;	
			}
		}
		if(save==0)
		printf("No estimate for this data set.\n");
		else
		{
			r=(6.0*count)/save;
			
			PI=sqrt(r);
			printf("%0.6lf\n",PI);
		}
		
	}
	return 0;
}
