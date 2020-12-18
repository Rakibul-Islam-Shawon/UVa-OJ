#include<bits/stdc++.h>

int x,y,lev,k;
long long n1,n2;

void step1(int n)
{
	int i=0;
	while(i<lev)
	{
		if(k==n)
		break;
		y-=2;
		k--;
		
		i++;
	}
	return ;
}
void step2(int n)
{
	int i=0;
	while(i<lev)
	{
		if(k==n)
		break;
		x+=2;
		k--;
		
		i++;
	}
	
	return;
}
void step3(int n)
{
	int i=0;
	
	while(i<lev)
	{
		if(k==n)
		break;
		y+=2;
		k--;
		
		i++;
	}
	return ;
}
void step4(int n)
{
	int i=0;
	
	while(i<lev)
	{
		if(k==n)
		break;
		x-=2;
		k--;
		
		i++;
	}
return ;	
}
int main()
{
	float x1,y1,x2,y2,formula;
	while(scanf("%lld %lld",&n1,&n2)!=EOF)
	{
		
	if(n1==-1 and n2==-1)
	return 0;	
	
	lev=0;
	k=0;
	while(k<n1)
	{
		lev++;
		k+=lev*4;
	}
	
	x=-lev;
	y=lev;
	
	step1(n1);
	step2(n1);
	step3(n1);
	step4(n1);
	printf("%d %d\n",x,y);
	x1=float(x);
	y1=float(y);
	
	
	lev=0;
	k=0;
	while(k<n2)
	{
		lev++;
		k+=lev*4;
	}
	
	x=-lev;
	y=lev;
	
    step1(n2);
	step2(n2);
	step3(n2);
	step4(n2);
	
	printf("%d %d\n",x,y);
	x2=float(x);
	y2=float(y);
	
	
	formula=(x1-x2)*(x1-x2) - (y1-y2)*(y1-y2);
	
	formula=sqrt(formula);
	
	//printf("%0.2f\n",formula);	
	}
}

