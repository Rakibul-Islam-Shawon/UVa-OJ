#include<bits/stdc++.h>

long long H(int n)
{
	int N=sqrt(n),k;
long long res = 0;
for(long int i = 1;i<=N;i=i+1 )
{
res = (res + n/i);
}
for(int j=n/(N+1);j>0;j=n/(j+1))
{
	k=n/j - n/(j+1);
	res+=(k*j);	
}

return res;
}
int main()
{
	long long test,n;
	long long res;
	
	scanf("%lld",&test);
	
	while(test--)
	{
		
		
		scanf("%lld",&n);
		res=H(n);
		printf("%lld\n",res);
	}
	
	
	return 0;
}
