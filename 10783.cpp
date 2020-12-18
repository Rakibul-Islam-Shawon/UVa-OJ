#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
	int a,b,t,count=1;
	scanf("%d",&t);
	while(t--)
	{
		int ans=0;
		scanf("%d\n%d",&a,&b);
		if(a%2==0)
			a+=1;
		else if(b%2==0)
		b-=1;	
		for(int j=a;j<=b;j=j+2)
		ans=ans+j;
		printf("Case %d: %d\n",count++,ans);
		
		
	}
	return 0;
}
