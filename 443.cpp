#include<bits/stdc++.h>
long long List[100000];
void find(void)
{
	int pos=0;
	List[pos++]=1;
	for(long long i=2;i<=2000000000;i++)
	{
		int flag=0;
		if(i%2!=0 && i%3!=0 && i%5!=0 && i%7!=0)
		flag=1;
		if(flag==0)
		List[pos++]=i;
	}
	
}
int main()
{
	long long n;
	find();
	while(scanf("%lld",&n)!=EOF)
	{
		if(n==0)
		return 0;
		printf("%lld\n",List[n-1]);
	}
	
}
