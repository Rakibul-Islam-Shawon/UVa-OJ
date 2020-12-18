#include<stdio.h>
#include<math.h>
#include<iostream>
bool flag[200005];
int List[1000009],primes[10000]; 
int listSize,cnt;   
using namespace std;
int count;

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

int primeFactorize( int n)
 {
    for( int i = 0;primes[i]<=sqrt(n);i++ ) 
	{ 
        if( n % primes[i] == 0 ) 
		{ 
            while( n % primes[i] == 0 )
			 {
			 	count++;
                n /= primes[i]; 
				 
            }
            
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
	List[1]=0;
	int n,i,j,ans;
	sieve(1208);
	for(i=2;i<=1000000;i++)
		{	
		count=0;
		List[i]=primeFactorize(i)+List[i-1];
	
		}
	
	while(scanf("%d",&n)!=EOF)
	{
		
		printf("%d\n",List[n]);
		
	}
	
    return 0;
}

