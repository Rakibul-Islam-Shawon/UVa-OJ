#include<stdio.h>
#include<math.h>
#include<iostream>
using namespace std;
int cases = 1;

bool flag[45000];
int primes[4650], cnt=0;
int save[(2000000000)/32 + 10];
int now[5000000];
int knt;

void seive(void)
{
primes[cnt++] = 2;
for(int i=3; i<=44721; i+=2)
{
if(flag[i]) continue;
primes[cnt++] = i;
if(i <= 44721/i)
{
int add = i<<1;
for(int j=i*i; j<=44721; j+=add) flag[j] = 1;
}
}
return ;
}


bool segmentSeive(int a, int b)
{
int sq = sqrt(b);
cases++;
for(int i=0; i<cnt  && primes[i] <= sq; i++)
{
int s = a / primes[i];
s *= primes[i];
if(s < a)
s += primes[i];
if(s == primes[i]) 
s = primes[i]*primes[i];
for(;s<=b; s+=primes[i]) 
save[s>>5] |= (1<<(s&31));
}
knt = 0;
for(int i=a; i<=b; i++)
{
if((save[i>>5]&(1<<(i&31)))==0)
now[knt++] = i;
}
return true;
}

int solve(int a, int b, int k, int s)
{
segmentSeive(a,b);
int ans = 0;
for(int i=k-1; i<knt; i++)
{
if(now[i] - now[i-k+1] == s) ans++;
}
return ans;
}

int main()
{
seive();
int x,y,test,a,b,k,s;
scanf("%d",&test);
while(test--)
{
scanf("%d %d %d %d",&a,&b,&k,&s);
int ans = solve(a,b,k,s);
printf("%d\n", ans);
}
return 0;
}
