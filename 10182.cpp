#include<bits/stdc++.h>


int x,y,k,n,lev;

void step1(void)
{
	int i=0;
	
	while(i<lev)
	{
		if(k==n)
		break;
		y--;
		i++;
		k--;
	}
	
	return ;
}
void step2(void)
{
	
	while(x!=0)
	{
		if(k==n)
		break;
		
		x--;
	    k--;	
	}
	return;
}
void step3(void)
{
	int i=0;
	while(i<lev)
	{
		
		if(k==n)
		break;
		x--;
		y++;
		k--;
		i++	;
	}
	return;
}
void step4(void)
{
	int i=0;
	while(i<lev)
	{
		if(k==n)
		break;
		y++;
     	k--;	
		i++;
	}
	return;
}
void step5(void)
{
	
	while(x!=0)
	{
	   if(k==n)
		break;
		x++;
		k--;	
	}
	return;
}
void step6(void)
{
	int i=0;
	while(i<lev)
	{
		if(k==n)
		break;
		x++;
		y--;
		i++;
		k--;
	}
	return;
}

int main()
{
   
while(scanf("%d",&n)!=EOF)
{
 lev=0;
k=1;

while(k<n)
{
	
	lev++;
	k+=(6*lev);
	
}


x=lev;
y=0;

step1();

step2();
step3();
step4();
step5();
step6();

printf("%d %d\n",x,y);
}

return 0;
}
