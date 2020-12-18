#include<stdio.h>
#include<math.h>
#include<iostream>
bool flag[20000005];
int List[100000],primes[100000]; 
int listSize,cnt,pos;   
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

void primeFactorize( int n ,int pos)
 {
    listSize = 0;   
    int sqrtN=sqrt(n); 
   
    for( int i = 0;i<pos;i++ ) 
	{ 
        if( n % primes[i] == 0 ) 
		{ 
            while( n % primes[i] == 0 )
			 {
			 	
                n /= primes[i]; 
				
                List[listSize] = primes[i]; 
                listSize++; 
            }
            
        }
    }
    
    if( n > 1 ) 
	{
        
        List[listSize] = n; 
        listSize++; 
    }
    
    return;
}
int main() 
{
	sieve(46341);
	
	int n,sqrtN,N;
	while(scanf("%d",&n)==1)
	{
		
		if(n==0)
		return 0;
		N=n;
		if(n<0)
		n=(-1)*n;
		pos=0;
		sqrtN=sqrt(n);
	for(int i=0;i<cnt;i++)
	{
		if(primes[i]<=sqrtN)
		pos++;
		else
		break;
	}
    primeFactorize(n,pos);
    printf("%d = ",N);
    if(N<0)
    {
    printf("-1");
    for( int i = 0; i < listSize; i++ ) 
        printf(" x %d", List[i]);
        	
    }
    else
    {
    	printf("%d",List[0]);
    for( int i = 1; i < listSize; i++ ) 
        printf(" x %d", List[i]);
    }
    printf("\n");
	}
	
    return 0;
}

