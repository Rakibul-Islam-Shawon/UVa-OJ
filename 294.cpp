#include<stdio.h>
#include<math.h>
#include<string.h>
#include<iostream>
int cnt;
int primes[1000000];
bool flag[20000000];
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


int primeFactorize( int n ,int pos)
 {
    int listsize,sum=1;   
     
   
    for( int i = 0;i<pos;i++ ) 
	{ 
	listsize=0;
        if( n % primes[i] == 0 ) 
		{ 
		listsize++;
            while( n % primes[i] == 0 )
			 {
			 	listsize++;
                n /= primes[i]; 
				
            }
            sum*=listsize;
        }
        
    }
    
    if( n > 1 ) 
	{
         
        sum*=2;
    }
    
    return (sum);
}


int main() 
{
	int n,ans,pos,value,store,L,U,k,flag;
	
	sieve(31630);
	
	
	scanf("%d",&n);
		
	while(n--)
	{
		store=1,flag=0;
		scanf("%d %d",&L,&U);
		for(k=L;k<=U;k++)
		{
			pos=0;
			for(int i=0;i<cnt;i++)
		{
			if(primes[i]>sqrt(k))
			break;
			pos++;
		}
		
			ans=primeFactorize(k,pos);
			
			if(ans>store)
			{
				store=ans;
				value=k;
				flag=1;
			}
			
		}
		if(flag==0)
		value=L;
	printf("Between %d and %d, %d has a maximum of %d divisors.\n",L,U,value,store);
	}
    
   
    return 0;
}
