#include<stdio.h>
#include<iostream>
#include<math.h>
using namespace std;
long long primes[10000017],list[200000];
bool flag[10000000];

int cnt,pos,listsize;

void sieve(int n)
{
	
	cnt=0;
	primes[cnt++]=2;
	
	for(int i=3;i<=n;i+=2)
	{
		
		if(flag[i]==0)
		{
			
			primes[cnt++]=i;
			
		}
		if(i<=n/i)
		{
			for(int j=i*i;j<=n;j+=2*i)
			{
				
				flag[j]=1;
				
			}
				
		}
		
		
	}
		
	return ;
}

void primefact(long long n,int pos)
{
	listsize=0;
	for(int i=0;i<pos;i++)
	{
		
		if(n%primes[i]==0)
		{
			
			while(n%primes[i]==0)
			{
				n/=primes[i];
				
				
				list[listsize++]=primes[i];
				
				
			}
				
		}
			
	}
	
	if(n>1)
	list[listsize++]=n;
	return ;
}


int main()
{
	long long n,N;
	sieve(10000000);
	
	while(scanf("%lld",&n)==1)
	{
		pos=0;
		if(n==0)
		return 0;
		else if(n<0)
		n=(-1)*n;
		N=sqrt(n);
		for(int i=0;i<cnt;i++)
		{
			if(primes[i]<=N)
			pos++;
			else 
			break;
			
		}
		
		primefact(n,pos);
		if(listsize<=1||list[listsize-1]-list[0]==0)
		printf("-1\n");
		else
		printf("%lld\n",list[listsize-1]);
	}
	

	return 0;
}
