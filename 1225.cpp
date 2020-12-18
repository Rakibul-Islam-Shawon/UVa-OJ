#include<bits/stdc++.h>
int arra[11]={0};
int main()
{
	int test,n,temp,N;
	
	scanf("%d",&test);
	
	while(test--)
	{
		scanf("%d",&n);
		
		for(int i=1;i<=n;i++)
		{
			N=i;
			
			while(1)
			{
				temp=N%10;
				arra[temp]++;
				N/=10;
				if(N==0)
				break;
			}
		}
		printf("%d",arra[0]);
		for(int i=1;i<=9;i++)
		printf(" %d",arra[i]);
		printf("\n");
		memset(arra,0,sizeof(int)*10);
		
	}
	return 0;
}


