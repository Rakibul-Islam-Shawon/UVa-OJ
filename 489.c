#include<stdio.h>
#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	char guess[10000];
	char main[10000];
	char bishal[30]="abcdefghijklmnopqrstuvwxyz";
	char xx[30];

	int count,key,bedluck,bedluck1;
	
	while(scanf("%d",&count)==1)
	{
		int i,j,k,l,pos=0;
		if(count == -1)
		return 0;
	scanf(" %s",main);
	scanf(" %s",guess);



int kount;



for(k=0;k<strlen(bishal);k++)
	{
		kount=0;
		for(l=0;l<strlen(guess);l++)
	
	{
		if(bishal[k]==guess[l])
		kount++;
	}
	if(kount>=1)
	{
		xx[pos]=bishal[k];
		pos++;	
	}
	
	}
	
	xx[pos+1]='\0';
	


		key=0,bedluck=0;
		
		for(i=0;i<strlen(xx);i++)
		{
			bedluck1=0;
			for(j=0;j<strlen(main);j++)
			{
				if(xx[i]==main[j])
				{
				key++;	
				//break;
				
				}
				else 
				
				bedluck1++;	
				
				
				
			}
			
			if(bedluck1==strlen(main))
			bedluck++;
			if(bedluck==7||key==strlen(main))
			{
			    break;	
				
			}
			
			
			
				
		}
		printf("Round %d\n",count);
		if(bedluck==7)
		printf("You lose.\n");
	else if(key>=strlen(main))
	printf("You win.\n");
	else
	printf("You chickened out.\n");	
		
	}
	
	return 0;
}
