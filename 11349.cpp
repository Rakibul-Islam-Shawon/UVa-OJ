#include<bits/stdc++.h>

using namespace std;

int main()
{
	char ch;
	int test,n,flag,k,p,mark,count=1;
	long long int arra[104][104];
	scanf("%d",&test);
	
	while(test--)
	{
		getchar();
		scanf("%c = %d",&ch,&n);
		flag=0,mark=0;
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				scanf("%lld",&arra[i][j]);
				if(arra[i][j]<0)
				mark=1;
			}
		}
		if(mark==1)
		printf("Test #%d: Non-symmetric.\n",count++);
		else
		{
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				k=arra[i][j];
				p=arra[n-i-1][n-j-1];
				if((i)>(n-i-1) || arra[k]!=arra[p])
				{
					if(arra[k]!=arra[p])
					mark=1;
					else
					flag=1;
					break;
				}	
			
			}
			if(mark==1 || flag==1)
			break;
		}
		
		if(mark==1)
		printf("Test #%d: Non-symmetric.\n",count++);
		else
		printf("Test #%d: Symmetric.\n",count++);	
		}
		
	}
return 0;
}
