#include<stdio.h>
#include<iostream>
#define i64 long long
i64 M;
using namespace std;

i64 F(i64 B,i64 P)
{
	if(P==0) return 1;
	if(P%2==0) 
	{
		i64 ret=F(B,P/2);
		return ((ret%M)*(ret%M))%M;
		
	}
	else 
	
		return ((B%M)*(F(B,P-1)%M))%M;
	
}
	
int main()
{


i64 B,P,ans;

while(scanf("%lld %lld %lld",&B,&P,&M)==3)
{
ans=F(B,P);
      cout<<ans<<endl;	
}
	return 0;	
}
 
