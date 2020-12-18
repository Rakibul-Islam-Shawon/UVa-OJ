#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
	int n,b,h,w,price;
	int seat;
	
	while(scanf("%d %d %d %d",&n,&b,&h,&w)==4)
	{
		int ans=1<<30;
	
		for(int j=0;j<h;j++)
		{
			
			scanf("%d",&price);
		
		for(int i=0;i<w;i++)
		{
			scanf("%d",&seat);
			if(seat>=n)
			{
				if(ans>(price*n))
				ans=price*n;
						
			}
			
		}
		
		}
	
	if(ans<=b)
	printf("%d\n",ans);
	else
	printf("stay home\n");	
	}	
return 0;	
	
}
