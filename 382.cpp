#include<stdio.h>
#include<math.h>
#include<iostream>
using namespace std;
int find_perfect(int n)
{
	
	int i,ans=0;
	for(i=1;i<=n/2;i++)
	{
		if(n%i==0)
		ans+=i;
		
		if(ans==n)
		return 1;
		
		
	}
	
	return 0;
}


int find_deficient(int n)
{
	
	int i,ans=0;
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		ans+=i;
		
		
		
		
	}
	if(ans<2*n)
		return 1;
	
	return 0;
}

int find_abundant(int n)
{
	
	int i,ans=0;
	for(i=1;i<=n/2;i++)
	{
		if(n%i==0)
		ans+=i;
		
		
		
		
	}
	if(ans>n)
		return 1;
	
	return 0;
}
int main()
{
	
	
	int ans,ans1,ans2,n[101],count=0;
	
	
	for(int i=0;i<100;i++)
	{
		cin>>n[i];
		if(n[i]==0)
		break;
		count++;
	}
	
printf("PERFECTION OUTPUT\n");

for(int j=0;j<count;j++)
{
	
ans=find_perfect(n[j]);
if(ans==1)
printf("%5d  PERFECT\n",n[j]);
else
{
	ans1=find_abundant(n[j]);
	
	if(ans1==1)
	printf("%5d  ABUNDANT\n",n[j]);
	else
	{
		ans2=find_deficient(n[j]);
		if(ans2==1)
		printf("%5d  DEFICIENT\n",n[j]);
	}
}	
	
	
}

	printf("END OF OUTPUT\n");
		
	return 0;
}
