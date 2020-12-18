#include<bits/stdc++.h>
using namespace std;

bool flag[2000000];
int primes[100000];
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
	bool flag;
	sieve(1000000+5);
	int n,p1,p2,i,j;
   while(scanf("%d",&n)==1)
   {
   	if(n==0)
   	return 0;

   	  i=0;
   	while(i<cnt and primes[i]<=n)
   	{
   		i++;
   	}
   	
        j=i-1;
		i=0;   	
   		p1=primes[0];
   		p2=primes[j];
   		
   		printf("%d:\n",n);
   		flag=false;
   		while(p1<=p2)
   		{
   			
   			if(p1+p2==n)
   			{
   				printf("%d+%d\n",p1,p2);
   				flag=true;
   				break;
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
   		
   	   if(flag==false)
   	   printf("NO WAY!\n");
   	
   }
   return 0;
}

