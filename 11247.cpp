#include<bits/stdc++.h>

int main()
{
	long long m,x;
	double ans,temp;
	
	while(scanf("%lld %lld",&m,&x)==2)
	{
		
		if(m==0 and x==0)
		return 0;
		if(x==0||x==100)
		printf("Not found\n");
		else
		{
			
		ans=(double)((m-1)*100)/(100-x);
	    temp=floor(ans);
	    if(ans==temp)
	    temp=ans-1;
	
	    
		if(temp>=m)
	     printf("%0.lf\n",temp);
	    else
	     printf("Not found\n");
		}
		
			
		}
		
	}

