#include<stdio.h>
#include<math.h>
#include<iostream>
bool flag[2005];
int List[128],primes[1000]; 
int listSize,cnt;   
using namespace std;
int mark[100];

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
    listSize = 0;   
     int count=0;
   
    for(int i = 0;i<pos;i++ ) 
	{ 
        if( n % primes[i] == 0 ) 
		{ 
            while( n % primes[i] == 0 )
			 {
			  	
                n /= primes[i]; 
				
            }
            count++;
        }
    }
    
    if( n > 1 ) 
	{
        count++;
        
    }
    
    return count;
}
int main() 
{
	int n,pos,ans;
	sieve(1009);
	
	
	while(scanf("%d",&n)==1)
	{
		if(n==0)
		return 0;
		
		pos=0;
		for(int i=0;i<cnt;i++)
		{
			if(primes[i]>sqrt(n))
			break;
			pos++;
		}
		ans=primeFactorize(n,pos);
		
       printf("%d : %d\n",n,ans);    
	}
    
    return 0;
}

