#include<bits/stdc++.h>
bool flag[100000];
int List[10000009]={0},mark[10000009]={0},primes[1000000];
int cnt;
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

void primeFactorizeA( int n )
 {
       int N=sqrt(n);
    for( int i = 0;i<cnt and primes[i]<=N;i++ ) 
	{ 
        if( n % primes[i] == 0 ) 
		{ 
            while( n % primes[i] == 0 )
			 {
			 	
                n /= primes[i]; 
				
                List[primes[i]]++; 
                
            }
            
        }
    }
    
    if( n > 1 ) 
	{
        
        List[n]++; 
        
    }
    
    return ;
}
int primeFactorize(int n)
 {
     int b=1,temp;
     int N=sqrt(n);
     
    for( int i = 0;i<cnt and primes[i]<=N;i++ ) 
	{ 
        if( n % primes[i] == 0 ) 
		{ 
            while( n % primes[i] == 0 )
			 {
			 	
                n /= primes[i]; 
				mark[primes[i]]++;
                
             }
            if(List[primes[i]]<mark[primes[i]])
            {
            	temp=pow(primes[i],mark[primes[i]]);
            	b=b*temp;
            	List[primes[i]]=0;
            	mark[primes[i]]=0;
            }
            List[primes[i]]=0;
            mark[primes[i]]=0;
			
        }
    }
    
    if( n > 1 ) 
	{
        
        
         if(List[n]<1)
         {
         	temp=pow(n,1);
         	b=b*temp;
         }
        List[n]=0;
        mark[n]=0; 
    }
    return b;
}

int main()
{
	int test,a,b,c,ans;
	float temp;
	sieve(3170);
	
	scanf("%d",&test);
	
	while(test--)
	{
		scanf("%d %d",&a,&c);
		
		if(c==0)
		printf("0\n");
		else
		{
			temp=(float)c/a;
			ans=c/a;
			if(temp!=ans)
			printf("NO SOLUTION\n");
			else
			{
				primeFactorizeA(a);
				ans=primeFactorize(c);
				
				printf("%d\n",ans);
			}
		}
		
	}
	
	return 0;
}
