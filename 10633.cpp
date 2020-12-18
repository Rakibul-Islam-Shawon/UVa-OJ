#include<stdio.h>
#include<algorithm>

using namespace std;
int main()
{
	
	unsigned long long n,m,i,flag,ans1,ans2;
	 
	
	
	while(scanf("%llu",&n)==1)
	{
		if(n==0)
		return 0;
	flag=0;
		ans1=(n*10)/9;
		
		for(i=ans1-10;i<=ans1+10;i++)
		{
			m=i/10;
			if(n+m==i&&i!=ans1)
			{
				flag=1;
				ans2=i;
				break;
			}
		}
		if(flag==1)
		{
			if(ans1>ans2)
		printf("%llu %llu\n",ans2,ans1);
		else
		printf("%llu %llu\n",ans1,ans2);
		
		}
		else
		printf("%llu\n",ans1);
			
	}
	
	return 0;
	
}
