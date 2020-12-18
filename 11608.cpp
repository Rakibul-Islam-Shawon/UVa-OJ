#include<bits/stdc++.h>

using namespace std;

int main()
{
	int savings,test=1,temp;
	
	int created[13],require[13];
	
	while(scanf("%d",&savings)==1)
	{
		if(savings<0)
		return 0;
		
		for(int i=0;i<12;i++)
		scanf("%d",&created[i]);
		
			for(int i=0;i<12;i++)
		scanf("%d",&require[i]);
		printf("Case %d:\n",test++);
		for(int i=0;i<12;i++)
		{
			if(i==0)
			{
				temp=savings-require[i];
				if(temp<0)
				{
					printf("No problem. :(\n");
					
				}
				else
				{
					printf("No problem! :D\n");
					savings=temp;
				}
				
			}
			else
			{
				savings+=created[i-1];
				temp=savings-require[i];
				if(temp<0)
				{
					printf("No problem. :(\n");
					
				}
				else
				{
					printf("No problem! :D\n");
					savings=temp;
				}
			}
		}
	}
}
