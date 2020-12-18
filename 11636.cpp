#include<stdio.h>
#include<math.h>

int main()
{
	int n,temp,i,count=1;
	
	while(scanf("%d",&n)!=EOF)
	{
		if(n<0)
		return 0;
		
		for(i=0;i<=20;i++)
		{
			temp=pow(2,i);
			if(temp>=n)
			break;
		}
		
		printf("Case %d: %d\n",count++,i);
	}
	
	
	
}
