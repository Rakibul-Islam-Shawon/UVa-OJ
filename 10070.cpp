#include<bits/stdc++.h>
using namespace std;
char str[1000000];
int leapyr(int mod)
{
	int temp,n=0;
	for(int i=0;i<strlen(str);i++)
{
	temp=str[i]-48;
	n+=temp;
if(n<mod)
{
if(i!=(strlen(str)-1))
n*=10;
}
else
{
n=n%mod;
if(i!=(strlen(str)-1))
n*=10;	
}
}
return n;
}
int main()
{
	int year=0,flag,mark,ret;
	
	while(scanf("%s",&str)!=EOF)
	{
		flag=0,mark=0;
		if(year!=0)
		printf("\n");
		if(leapyr(4)==0)
		{
			if(leapyr(100)!=0 || leapyr(400)==0)
			{
				printf("This is leap year.\n");
				flag=1;
			    mark=1;
			}
			
		}
		if(leapyr(15)==0)
		{
			flag=1;
			printf("This is huluculu festival year.\n");
		}
		
		if(leapyr(55)==0)
		{
			if(mark==1)
			{
				flag=1;
				printf("This is bulukulu festival year.\n");
			}
			
		}
		
		if(flag==0)
		printf("This is an ordinary year.\n");
		year++;
	
	}
	return 0;
}
