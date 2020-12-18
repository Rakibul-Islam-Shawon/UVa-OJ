#include <stdio.h>
#include<iostream>
#include<math.h>
using namespace std;
int cnt;
bool flag[100000];
int primes[100000];


void sieve(int n)
{
	n=10000;
cnt=0;
primes[cnt++] = 2;
for(int i=4;i<=n;i+=2)
flag[i]=1;
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
flag[1]=1;
return ;
}
int isprime(long long n)
{
	int c=1;
	if(n<=10000)
	return !flag[n];
	for(int i=0;i<cnt&&primes[i]*primes[i]<=n;i++)
	{
		if(n%primes[i]==0)
		{
			c=0;
			break;
		}
		
	}
	
	return c;
}
int main()
{
	
	sieve(10000);
	
	long long p1,p2,count,i,j,flag,diff,temp1,temp2,ans;
	long long n;
   while(scanf("%lld",&n)!=EOF)
   {
   	i=0;
   	if(n<=4)
   	printf("%lld is not the sum of two primes!\n",n);
   	else if(n%2!=0)
   	{
   	  ans=isprime(n-2);
		 if(ans==1)
		 printf("%lld is the sum of 2 and %lld.\n",n,n-2);
		 else
		 printf("%lld is not the sum of two primes!\n",n);
		 	
   	}
   	else
   	{
   	   
               i=n/2-1;
                if(i%2==0) 
				i--;
                for( ; i ;i-=2)
				{
                    if(isprime(i) && isprime(n-i)) 
					break;
                }
	       if(i>0)
            printf("%lld is the sum of %lld and %lld.\n",n,i,n-i); 
   	else
		 printf("%lld is not the sum of two primes!\n",n);
    }
    
    
   
}
return 0;
}

