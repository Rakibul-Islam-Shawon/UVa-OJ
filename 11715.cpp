#include<bits/stdc++.h>

int main()
{
	double no,u,v,a,s,t,temp,x,y,z;
	int count=1;
	
	while(scanf("%lf",&no)!=EOF)
	{
		if(no==0)
		return 0;
		scanf("%lf %lf %lf",&x,&y,&z);
		
		
		if(no==1)
		{
		u=x,v=y,t=z;
		a=(v-u)/t;
		s=u*t+(0.5)*(a*t*t);
		
		printf("Case %d: %0.3lf %0.3lf\n",count++,s,a);	
		}
		else if(no==2)
		{
			u=x,v=y,a=z;
			t=(v-u)/a;
			
			s=u*t+(0.5)*(a*t*t);
			printf("Case %d: %0.3lf %0.3lf\n",count++,s,t);
		}
		else if(no==3)
		{
			u=x,a=y,s=z;
			v=sqrt((u*u)+2*a*s);
			t=(v-u)/a;
			printf("Case %d: %0.3lf %0.3lf\n",count++,v,t);
		}
		else if(no==4)
		{
		v=x,a=y,s=z;
		
		u=sqrt((v*v)-2*a*s);
		t=(v-u)/a;
		printf("Case %d: %0.3lf %0.3lf\n",count++,u,t);	
		}
		
	}
}
