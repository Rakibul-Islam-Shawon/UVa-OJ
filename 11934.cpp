#include<bits/stdc++.h>

int main()
{
	
	int a,b,c,d,L,count,eqn;
	
	while(scanf("%d %d %d %d %d",&a,&b,&c,&d,&L)==5)
	{
		if(a==0&&b==0&&c==0&&d==0&&L==0)
		return 0;
		count=0;
		for(int i=0;i<=L;i++)
		{
			
			eqn=a*(i*i)+b*i+c;
			if(eqn%d==0)
			count++;
		}
		
		printf("%d\n",count);
	}
	
	
}
