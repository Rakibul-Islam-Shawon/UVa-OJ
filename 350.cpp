#include<bits/stdc++.h>
bool flag[100000]={false};
int main()
{
	
	int L,I,M,Z,count=1,len;
	long long temp;
	
	while(scanf("%d %d %d %d",&Z,&I,&M,&L)==4)
	{
		if(Z==0&&I==0&&M==0&&L==0)
		return 0;
		long long i=L;
		
		temp=(i*Z+I)%M;
		i=temp;
		len=0;
		while(1)
		{
			
			if(flag[i]==true)
			break;	
			temp=(i*Z+I)%M;	
			len++;
			flag[i]=true;
			i=temp;
			
		}
		
		printf("Case %d: %d\n",count++,len);
		memset(flag,0,sizeof(int)*(10000));
	}
	return 0;
}
