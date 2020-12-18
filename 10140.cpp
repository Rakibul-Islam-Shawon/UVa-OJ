#include<stdio.h>
#include<math.h>
#include<iostream>
using namespace std;

bool flag[47000];
int primes[6550], cnt;
long long save[(2147483647)/32 + 10];
long long now[1000000];
int knt;

void seive(long long U)
{
	cnt=0;
	U=sqrt(U);
primes[cnt++] = 2;
for(int i=3; i<=U; i+=2)
{
if(flag[i]) continue;
primes[cnt++] = i;
if(i <=U/i)
{
long long add = i<<1;
for(long long j=i*i; j<=U; j+=add) flag[j] = 1;
}
}
return ;
}


bool segmentSeive(long long a, long long b)
{
int sq = sqrt(b);
for(int i=0; i<cnt  && primes[i] <= sq; i++)
{
long long s = a / primes[i];
s *= primes[i];
if(s < a)
s += primes[i];
if(s == primes[i]) 
s = primes[i]*primes[i];
for(;s<=b; s+=primes[i]) 
save[s>>5] |= (1<<(s&31));
}
knt = 0;
for(long long i=a; i<=b; i++)
{
if((save[i>>5]&(1<<(i&31)))==0)
now[knt++] = i;
}
return true;
}

void solve(long long L, long long U)
{
segmentSeive(L,U);

int closest,distant;
long long c1,c2,d1,d2;
if(knt<=1)
printf("There are no adjacent primes.\n");
else
{
closest=now[1]-now[0];
distant=now[1]-now[0];
c1=now[0];
c2=now[1];
d1=now[0];
d2=now[1];
for(int i=0;i<knt-1;i++)
{
	if(now[i+1]-now[i]<closest)
	{
		
		closest=now[i+1]-now[i];
		c1=now[i];
		c2=now[i+1];

	}
	if(now[i+1]-now[i]>distant)
	{
		distant=now[i+1]-now[i];
		d1=now[i];
		d2=now[i+1];
		
	}
	
	
}

	printf("%lld,%lld are closest, %lld,%lld are most distant.\n",c1,c2,d1,d2);
	
}

return;
}

int main()
{

long long L,U;
	
while(scanf("%lld %lld",&L,&U)==2)
{
if(L==1&&U==2)
{
	printf("There are no adjacent primes.\n");
	
}
else
{
 if(L==1)
L=L+1;
seive(U);
solve(L,U);		
}

}

return 0;
}
