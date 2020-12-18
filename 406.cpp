#include <stdio.h>
#include<iostream>
using namespace std;
bool flag[20000005];
int primes[200000];
int cnt;
void seive(int n)
{

primes[cnt++] = 1;
primes[cnt++]=2;
for(int i=3; i<=n; i+=2)
{
if(flag[i] == 0)
{
primes[cnt++] = i;
if(i <= n/i)
{
for(int j=i*i; j<=n; j+=i*2) 
flag[j] = 1;
}
}
}
return ;
}

int main()
{
	int N,C,center,i,k;
	while(scanf("%d %d",&N,&C)==2)
	{
	cnt=0;
	if(N==1)
	{
	printf("%d %d: %d\n\n",N,C,N);	
	}
	else
	{
	seive(N);
	if(cnt%2==0)
	center=2*C;
	else
	center=2*C-1;
	
	if(center>cnt)
	{
		printf("%d %d:",N,C);
		for(i=0;i<cnt;i++)
    printf(" %d",primes[i]);
printf("\n\n");
	}
	else
	{
		
		k=(cnt-center)/2;
	printf("%d %d:",N,C);
	for(i=0;i<center;i++)
    printf(" %d",primes[k++]);
printf("\n\n");
	}	
	}
    
	}
	
return 0;
}
