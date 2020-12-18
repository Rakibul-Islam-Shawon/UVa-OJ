#include<stdio.h>
#include<math.h>
#include<iostream>
#include<stdlib.h>
bool flag[20000005];
int List[3000],primes[10000000]; 
int listSize,cnt,count,sum;   
using namespace std;


void sieve(int n)
{
	
cnt=0;
primes[cnt++] = 2;
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

double primeFactorize( int n ,int cnt)
 {
    sum=1;    
   
    for( int i = 0;i<cnt;i++ ) 
	{ 
        if( n % primes[i] == 0 ) 
		{ 
		count=0;
            while( n % primes[i] == 0 )
			 {
			 	
                n /= primes[i]; 
				 count++;
                
            }
           sum*=2*count+1; 
           count=0;
        }
    }
    
    if( n > 1 ) 
	{
		count++;
        sum*=2*count+1;
        
        
    }
    
    return sum;
}
int main() 
{
	int n,sqrtN,pos,main;
	double ans;
	sieve(44729);
	while(scanf("%d",&n)==1)
	{
		if(n==0)
		return 0;
		
		
		pos=0;
		sqrtN=sqrt(n);
	for(int i=0;i<cnt;i++)
	{
		if(primes[i]>sqrtN)
		break;
		pos++;
	}
    ans=primeFactorize(n,pos);
    ans/=2.0;
    ans=(ceil(ans));
    main=(int)ans;
    printf("%d %d\n",n,main);
	}
	
    return 0;
}

