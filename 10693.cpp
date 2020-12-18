#include<bits/stdc++.h>
using namespace std;

int main()
{
	double f,l,v,V;
	
	while(scanf("%lf %lf",&l,&f)==2)
	{
		
		if(l==0 and f==0)return 0;
		
		v=sqrt(2*f*l);
		
		V=v*3600;
		V/=(2*l);
		
		printf("%0.8lf %0.8lf\n",v,V);
		
	}
}
