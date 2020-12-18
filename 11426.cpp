#include<stdio.h>
#include<algorithm>
#include<math.h>

int save[400000];
int gcd(int a,int b)
{
	int rem;
	while(1)
		{
			rem=a%b;
			if(rem==0)
			{
				
				return b;
			
			}
			a=b;
			b=rem;
			
		}
	
}
int main()
{
	 long long ans;

int N,a,b;
while(scanf("%d",&N)!=EOF)
{
	ans=0;
for(a=1;a<N;a++)
{
for(b=a+1;b<=N;b++)
  ans+=gcd(a,b);
  save[b]=
}

printf("%lld\n",ans);	
}

return 0;
}
