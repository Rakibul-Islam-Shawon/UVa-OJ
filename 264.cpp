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
		if(level%2==0)
		printf("TERM %lld IS %lld/%lld\n",n,level-pos,pos+1);
		else
		printf("TERM %lld IS %lld/%lld\n",n,pos+1,level-pos);
		
	}
	return 0;
}
