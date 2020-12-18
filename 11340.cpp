#include<stdio.h>
#include<math.h>
#include<string.h>
#include<iostream>
using namespace std;
char para[10001];
int main()
{
	
	int n,k,m,cost[101],count;
	double sum;
	char info[300];
	scanf("%d",&n);
	
	
	while(n--)
	{
		sum=0;
		scanf("%d\n",&k);
		
		for(int i=0;i<k;i++)
		scanf("%c%d\n",&info[i],&cost[i]);
		
		scanf("%d\n",&m);
		
		for(int i=0;i<m;i++)
{
	gets(para);
	int len=strlen(para);
	for(int j=0;j<k;j++)
	{
		for(int x=0;x<strlen(para);x++)
	
		if(info[j]==para[x])
		sum+=cost[j];
	
	
	}
     
	}


    printf("%0.2lf$\n",sum/100.00);


	}
	return 0;
}
