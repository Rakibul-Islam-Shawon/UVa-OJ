#include<bits/stdc++.h>


int x,y,k,n1,n2,lev;

void step1(int n)
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
void step2(int n)
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
void step3(int n)
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
void step4(int n)
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
void step5(int n)
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
void step6(int n)
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
   int ax,ay,bx,by,dx,dy,temp,ans;
while(scanf("%d %d",&n1,&n2)!=EOF)
{
	if(n1==0 and n2==0)
	return 0;
	
 lev=0;
 k=1;

while(k<n1)
{
	
	lev++;
	k+=(6*lev);
	
}
x=lev;
y=0;

step1(n1);
step2(n1);
step3(n1);
step4(n1);
step5(n1);
step6(n1);

ax=x;
ay=y;

lev=0;
k=1;
while(k<n2)
{
	
	lev++;
	k+=(6*lev);
	
}
x=lev;
y=0;

step1(n2);
step2(n2);
step3(n2);
step4(n2);
step5(n2);
step6(n2);

bx=x;
by=y;

dx=abs(ax-bx);
dy=abs(ay-by);
temp=abs((ax-bx)+(ay-by));
ans=(dx+dy+temp)/2;
printf("The distance between cells %d and %d is %d.\n",n1,n2,ans);
}


}
