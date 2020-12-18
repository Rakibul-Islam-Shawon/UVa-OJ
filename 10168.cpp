#include <stdio.h>
#include<iostream>
#include<math.h>
using namespace std;
bool flag[20000005];
int primes[20000000],ans[10];
int cnt;

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

int main()
{
	sieve(10000000);
	int n,temp,ans1,count,p1,p2;
   while(scanf("%d",&n)!=EOF)
   {
   	
   	count=0;
   	int i=0;
   	while(i<cnt)
   	{
   		if(primes[i]>n)
   		break;
   		count++;
   		i++;
   	}
   	
   	if(n<8)
   	printf("Impossible.\n");		
   	else
   	{
   	
   		int i=0,j;
   		if(n%2==0)
   		{
   		ans[0]=2;
   		ans[1]=2;
   		n=n-4;	
   		}
   		else
   		{
   		ans[0]=2;
   		ans[1]=3;
   		n=n-5;
   		}
   		
   		
   		j=count-1;
   		
   		p1=primes[i];
   		p2=primes[j];
   		i=i+1;
   		j=j-1;
   		
   		
   		while(p1+p2!=n)
   		{
   			if(p1+p2>n)
   			{
   				p2=primes[j];
   				j--;
   			}
   			else
   			{
   				
   				p1=primes[i];
   				i++;
   				
   			}
   			
   			
   			
   		}
   		
   		printf("%d %d %d %d\n",ans[0],ans[1],p1,p2);
   	
   }
}
return 0;
}
