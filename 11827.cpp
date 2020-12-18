#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
using namespace std;
int gcd(int a,int b)
{
	int rem;
	
	while(1)
	{
	rem=a%b;
	if(rem==0)
	return b;
	a=b;
	b=rem;
		
	}
	
	
}

int main()
{
	int n,main[108],pos,solution,temp,swap;
	char arra[108];
	char sign[2]=" ";
	char *tok;
	scanf("%d ",&n);
	while(n--)
	{
		pos=0,solution=0;
		gets(arra);
		
		tok=strtok(arra,sign);
		
		while(tok!=NULL)
		{
			main[pos++]=atoi(tok);
			tok=strtok(NULL,sign);
			
		}
		
		for(int i=0;i<pos-1;i++)
		for(int j=0;j<pos-i-1;j++)
		{
			if(main[j]>main[j+1])
			{
			
			swap=main[j+1];
			main[j+1]=main[j];
			main[j]=swap;
		}
		}
		
		for(int i=0;i<pos-1;i++)
		{
			for(int j=i+1;j<pos;j++)
			{
				temp=gcd(main[i],main[j]);
				if(temp>solution)
				solution=temp;
			}
		}
		
		printf("%d\n",solution);
	}
	
	
	return 0;
}
