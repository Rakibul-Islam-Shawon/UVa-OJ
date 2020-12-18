#include<bits/stdc++.h>
bool flag[20005];
int List[10009]={0},primes[1000]; 
int temp[6000]={0};
int ans[1000];
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
    listSize = 0;   
     int last;
   int sqN=sqrt(n);
    for( int i = 0;i<cnt and primes[i]<=sqN;i++ ) 
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
void primeFactorizem( int n )
 {
       
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
            
        }
    }
    
    if( n > 1 ) 
	{
        
        temp[n]++; 
        
    }
    
    return ;
}
int main() 
{
	int n,last,test,m,save,flag,count,T=1;
	sieve(200);
	
	
	List[0]=0,List[1]=1;
	scanf("%d",&test);
	
	while(test--)
	{
		scanf("%d %d",&m,&n);
	
		flag=0,count=0;
		
        primeFactorizem(m);

		for(int i=2;i<=n;i++)
		primeFactorize(i);
		
	
    for(int i=2;i<=m;i++)
    {
    	if(temp[i]!=0)
		{
			ans[count]=List[i]/temp[i];
			if(ans[count]==0)
			{
				flag=1;
				break;
			}
			count++;
		}	
    		
    }
    if(flag==1)
    printf("Case %d:\nImpossible to divide\n",T++);
    else
    {
    sort(ans,ans+count);
    
	printf("Case %d:\n%d\n",T++,ans[0]);	
    }
    
        memset(ans,0,sizeof(int)*(count+1));
		memset(temp,0,sizeof(int)*(m+1));
		memset(List,0,sizeof(int)*(n+1));
	}
	
	
	
    return 0;
}

