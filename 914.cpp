#include<bits/stdc++.h>
bool flag[20000005];
int primes[2000000];
int freq[129]={0};
int cnt = 0,knt;
using namespace std;

void seive(int n)
{

primes[cnt++] = 2;
for(int i = 3; i <= n; i += 2)
{
if(flag[i] == 0)
{
primes[cnt++] = i;
if(i <= n / i)
{
for(int j = i * i; j <= n; j += i * 2)
flag[j] = 1;
}
}
}
return ;
}


int main()
{

int T;

int N ,temp,ans,count,save;
int M,j,pos;
seive(1000007);

scanf("%d",&T);
while(T--)
{
	pos=0;
scanf("%d%d",&M, &N);
for(int i=0;i<cnt;i++)
{
if(primes[i]>=M)
break;
pos++;	
}

for(j=pos;j<cnt and primes[j+1]<=N;j++)
{
	temp=primes[j+1]-primes[j];
 	freq[temp]++;
}

 if(primes[pos]==M&&primes[j]==N&&j-pos==3)
 {
 	printf("No jumping champion\n");
 }
 else
 {
 save=0;
 for(j=0;j<=120;j++)
 {
 if(freq[j]>=save)
 {
 	save=freq[j];
 	ans=j;
 }
 
 } 
 count=0;
 for(int i=1;i<=120;i++)
 if(freq[i]==save)
 count++;
 if(count>=2)
 printf("No jumping champion\n");
 else
 printf("The jumping champion is %d\n",ans);
 }
 memset(freq,0,sizeof(int)*(121));
}

return 0;
}
