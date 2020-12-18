#include<stdio.h>
#include<math.h>
#include<iostream>
using namespace std;
int primes[100000],cnt,listsize;
long long list[2000],pos; 
int status[1000000/32];

bool Check(int N,long long pos)
{
return (bool)(N & (1<<pos));
}
long long Set(int N,long long pos)
{
	return N=N | (1<<pos);
}


void sieve(int N)
{
	cnt=0;
     int i,j;
	 int sqrtN; 
     sqrtN = int( sqrt( N ) );
     for( i = 3; i <= sqrtN; i += 2 ) 
     {
		 if( Check(status[i>>5],i&31)==0)
		 {
	 		 for( j = i*i; j <= N; j += 2*i )
			 {
				 status[j>>5]=Set(status[j>>5],j&31);
	 		 }
		 }
	 }
	 
	 primes[cnt++]=2;
	 for(i=3;i<=N;i+=2)
		 if( Check(status[i>>5],i&31)==0)
	 	 {
	 	 	primes[cnt++]=i;
	 	    
	 	 }
	 	
	 	return ;
}


void primefact( long long n,long long pos)
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
	sieve(1000000);
	while(scanf("%lld",&n)==1)
	{
		pos=0;
		if(n<0)
		return 0;
		N=sqrt(n);
		for(int i=0;i<cnt;i++)
		{
			if(primes[i]<=N)
			pos++;
			else 
			break;
			
		}
		
		primefact(n,pos);
		
		for(int i=0;i<listsize;i++)
		{
			
			printf("    %lld\n",list[i]);
			
			
		}
		printf("\n");
	}
	
	return 0;
}

