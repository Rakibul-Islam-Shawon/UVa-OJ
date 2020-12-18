#include<stdio.h>
#include<math.h>

int main()
{
	int N,K,P,test,count,i,temp;
	
	scanf("%d",&test);
	temp=1;
	while(test--)
	{
		scanf("%d %d %d",&N,&K,&P);
		
		count=1;
		i=K;
		while(count<=P)
		{
			
			if(i==N)
			i=1;
			else		
			i++;
			count++;
		}
		printf("Case %d: %d\n",temp++,i);
	}
	
	return 0;
	
}
