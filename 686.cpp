#include <stdio.h>
#include<iostream>
#include<math.h>
using namespace std;
bool flag[2000000];
int primes[200000];
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
	sieve(33000);
	int n,p1,p2,count,i,j,pair;
   while(scanf("%d",&n)==1)
   {
   	if(n==0)
   	return 0;
     count=0,pair=0;
   	i=0;
   	while(i<cnt)
   	{
   		if(primes[i]>n)
   		break;
   		count++;
   		i++;
   	}
   	i=0;
        j=count-1;   	
   		p1=primes[i];
   		p2=primes[j];
   		
   		while(p1<=p2)
   		{
   			
   			if(p1+p2==n)
   			{
   				pair++;
   				i++;
   				p1=primes[i];
   			}
   			else
   			{
   			if(p1+p2>n)
   			{
   				j--;
   				p2=primes[j];
   				
   			}
   			else
   			{
   			   i++;
   				p1=primes[i];
   				
   			}		
   			}
   				
   			
   		}
   		
   		printf("%d\n",pair);
   	
   }
   return 0;
}

