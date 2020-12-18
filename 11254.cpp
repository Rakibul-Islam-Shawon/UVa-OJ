#include<bits/stdc++.h>

using namespace std;
int main()
{
	long long n,temp,check,val,i;
	long double formula;
	while(scanf("%lld",&n)==1)
	{
		if(n==-1)
		return 0;
		if(n==0)
		printf("0 = 0 + ... + -1\n");
		else
		{
		
		for(i=floor(sqrt(n*2));i>0;i--)
		{
			formula=(2.0*n+i-i*i)/double(2*i);
			check=formula;
			if(formula==check)
			{
				val=formula;
				break;
			}
		}
		printf("%d = %d + ... + %d\n",n,val,val+i-1);
		
		}
		
	}
}
