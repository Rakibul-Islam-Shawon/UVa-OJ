#include<bits/stdc++.h>
bool flag[20000005];
int List[355221797],primes[100000],mark[1000003]={0}; 
int DP[1000003]={0};
int listSize,cnt;   
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

void primeFactorize( int n )
 {
    int count,main,factors=0;   
      int N=sqrt(n);
      main=n;
    for(int i = 0;i<cnt and primes[i]<=N;i++ ) 
	{ 
        if( n % primes[i] == 0 ) 
		{ 
		count=0;
            while( n % primes[i] == 0 )
			 {
			 	
                n /= primes[i]; 
				
                count++;
             }
            if(count>=2)
            {
            	mark[main]=0;
            	DP[main]=DP[main-1]+mark[main];
            	return;
            } 
        factors++;
        }
    }
    
    if( n > 1 ) 
	{
        factors++;
        
    }
    if(factors%2==0)
    mark[main]=1;
    else
    mark[main]=-1;
    DP[main]=DP[main-1]+mark[main];
    return ;
}
int main() 
{
	int n,last;
	sieve(1003);
	mark[1]=1,DP[1]=1;
	for(int i=2;i<=1000000;i++)
	primeFactorize( i );
	
	while(scanf("%d",&n)!=EOF)
	{
		if(n==0)
		return 0;
		
		printf("%8d%8d%8d\n",n,mark[n],DP[n]);
    
	}

	
    return 0;
}

