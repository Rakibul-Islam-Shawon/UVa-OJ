#include<bits/stdc++.h>

int main()
{
	long long n,formula,level,pos;

	while(scanf("%lld",&n)!=EOF)
	{
		level=floor(sqrt(2*n));
		
		formula=(level*(level+1))/2;
		
		pos=formula-n;
		
		if(pos<0)
		{
			level=level+1;
			formula=(level*(level+1))/2;
			pos=formula-n;
		}	
		printf("%lld/%lld\n",pos+1,level-pos);
		
	}
	return 0;
}
