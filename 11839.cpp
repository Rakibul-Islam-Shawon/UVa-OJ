#include<bits/stdc++.h>
using namespace std;

int main()
{

int n,count,temp,i,j;
int arra[256][6];
while(scanf("%d",&n)==1)
{
	
	if(n==0)
	return 0;
	for(j=0;j<n;j++)
	{
		for(i=0;i<5;i++)
	   scanf("%d",&arra[j][i]);
	}
	
	for(j=0;j<n;j++)
	{
		count=0;
		for(i=0;i<5;i++)
		{
		if(arra[j][i]<=127)
	    {
		count++;
		temp=i;
	    }
			
		}
	if(count>1 or count==0)
	printf("*\n");
	else
	{
		printf("%c\n",65+temp);
	}
	
	}
	
}

}
