#include<bits/stdc++.h>
int main()
{
	int m,n,a,b,rem,count,freq[10]={0},diff;
	
	while(scanf("%d %d",&n,&m)!=EOF)
	{
		diff=m-n+1;
		count=0;
		for(int i=n;i<=m;i++)
		{
			a=i;
			while(a!=0)
			{
				rem=a%10;
				a/=10;
				freq[rem]++;
				if(freq[rem]>=2)
			{
				count++;
				break;
			}
			
			}
			memset(freq,0,sizeof(int)*(10));
		}
		
		printf("%d\n",diff-count);
	}
	
	return 0;
}
