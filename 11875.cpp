#include<stdio.h>
int main()
{
	int test,n,arra[15],mid,i;
	
	
	while(scanf("%d",&test)==1)
	{
		int count=1;
		while(test--)
		{
		scanf("%d",&n);
		for(i=0;i<n;i++)
			
			scanf("%d",&arra[i]);
			
		mid=n/2;
		printf("Case %d: %d\n",count++,arra[mid]);
			
		}
		
		
	}
	return 0;
}
