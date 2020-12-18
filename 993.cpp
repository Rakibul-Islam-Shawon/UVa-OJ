#include<stdio.h>
#include<math.h>
#include<algorithm>
#include<iostream>

using namespace std;
int main()
{
	
	int n,test,pos,d,a[200],sum,main;
	
	scanf("%d",&test);
	
	while(test--)
	{
		scanf("%d",&n);
		main=n;
		pos=0,sum=1;
		d=9;
		while(d>1)
		{
			
			while(n%d==0)
			{
				n/=d;
				a[pos++]=d;
			}
			d--;
		}
		
		sort(a,a+pos);
		
		for(int i=0;i<pos;i++)
		sum*=a[i];
		
		
		if(sum==main)
		{
		for(int i=0;i<pos;i++)
		printf("%d",a[i]);	
		}
		else
		printf("-1");
		printf("\n");
	}
	return 0;
}
