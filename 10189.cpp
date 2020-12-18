#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;

int main()
{
int count=1,flag=0;
char a[150][150],input[150];

int m,n;
while(1)
{
	gets(input);
	sscanf(input,"%d %d\n",&m,&n);
	
	if(m==0&&n==0)
	break;
	
	int b[150][150]={0};
	
for(int i=0;i<m;i++)
{
	
	gets(a[i]);
}


for(int i=0;i<m;i++)
{
	for(int j=0;j<n;j++)
	{
		
		if(a[i][j]=='*')
		{
			b[i][j+1]++;
			b[i][j-1]++;
			b[i-1][j]++;
			b[i+1][j]++;
			b[i+1][j+1]++;
			b[i-1][j-1]++;
			b[i+1][j-1]++;
			b[i-1][j+1]++;	
			
		}	
		
	}
}
if(flag==1)
printf("\n");
flag=1;
printf("Field #%d:\n",count);
for(int i=0;i<m;i++)
{
	for(int j=0;j<n;j++)
	{
	
	if(a[i][j]=='*')
	printf("%c",a[i][j]);
	else
	printf("%d",b[i][j]);
	
		
	}
	printf("\n");
}

count++;
	
}


return 0;
}
