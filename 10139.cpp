#include<bits/stdc++.h>
bool flag[2000005];
int primes[100000]; 
int temp[214748364]={0};
int ans[1000000];
int listSize,cnt;   
using namespace std;

int get_powers(int n, int p)
{
    int res = 0;
    for (long long power = p ; power <= n ; power *= p)
        res += n/power;
    return res;
}


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

int primeFactorizem( int n ,int N)
 {
    int main=n,ret,mark=0;   
   int sqN=sqrt(n);
   
    for( int i = 0;i<cnt and primes[i]<=sqN;i++ ) 
	{ 
        if( n % primes[i] == 0 ) 
		{ 
            while( n % primes[i] == 0 )
			 {
			 	
                n /= primes[i]; 
				
              temp[primes[i]]++;
            
            }
            listSize=primes[i];
           ret=get_powers(N,primes[i]);
           if(ret<temp[primes[i]])
           {
           	mark=1;
           	temp[primes[i]]=0;
           	return mark;
           }
           temp[primes[i]]=0;
        }
    }
    
    if( n > 1 ) 
	{
       if(main==n)
        return main;
        
        ret=get_powers(N,n);
           if(ret<1)
           mark=1;
    }
    
    return mark;
}
int main() 
{
	int n,test,m,save,flag,count;
	sieve(46350);
	while(scanf("%d %d",&n,&m)!=EOF)
	{
		
        flag=primeFactorizem(m,n);
    
    
    if(flag==m)
    {
    	save=get_powers(n,flag);
    	if(save!=0)
    	printf("%d divides %d!\n",m,n);
    	else
    	printf("%d does not divide %d!\n",m,n);
    }
    
   else
   {
   	if(flag==1)
    printf("%d does not divide %d!\n",m,n);
    else   
	printf("%d divides %d!\n",m,n);	
	
   }   
    
		
	}
	
    return 0;
}

