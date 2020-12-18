#include <stdio.h>
#include<iostream>
using namespace std;
bool flag[20000005];
int primes[20000000];
int primen[20000000];
int cnt = 0,n,knt=0;
void seive()
{
n=20000000;
primes[cnt++] = 2;
for(int i=3; i<=n; i+=2)
{
if(flag[i] == 0)
{
primes[cnt++] = i;
if(i <= n/i)
{
for(int j=i*i; j<=n; j+=i*2) flag[j] = 1;
}
}
}
for(int i=0;i<cnt;i++)
{
	if(primes[i+1]-primes[i]==2)
	{
		primen[knt++]=primes[i];
		primen[knt]=primes[i+1];		
	    knt++;
	
	}	
}
return ;
}

int main()
{
int n;

seive();

while(scanf("%d",&n)!=EOF)
{
	printf("(%d, %d)\n",primen[2*n-2],primen[2*n-1]);
	
	
}

return 0;
}
