#include<stdio.h>

int main()
{
	int flag,n,r,i,test=1;
	
	
	while(scanf("%d %d",&r,&n)==2)
	{
		if(r==0 && n==0)
		return 0;
		r=r-n;
		ans=r/n;
		
		if(ans>26)
		printf("Case %d: impossible\n",test++);
		else
		printf("Case %d: %d\n",test++,ans);
		
		
	}
	
	
	return 0;
	
}
