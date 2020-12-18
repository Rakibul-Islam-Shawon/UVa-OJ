#include<stdio.h>
#include<math.h>
#include<iostream>
using namespace std;
int main()
{
	
	float d,v,u,w1,w2,t1,t2,ans;
	int count,test;
	
	
	scanf("%d",&test);
	count=1;
	
		while(test--)
		{
			
		scanf("%f %f %f",&d,&v,&u);
		if(u==0||v==0||u<=v)
		printf("Case %d: can't determine\n",count++);
		else
		{
			w1=sqrt(u*u-v*v);
		t1=d/w1;	
		t2=d/u;
		
		if(t2>t1)
		ans=t2-t1;
		else
		ans=t1-t2;
		printf("Case %d: %0.3f\n",count++,ans);	
		}	
		
		}
		
	return 0;
	
}

