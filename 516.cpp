#include <string.h>
#include <stdio.h>
#include<stdlib.h>
#include<math.h>
#include<iostream>
int pos,listsize,cnt;
int primes[200],list[100];
bool flag[500];
long long number;
using namespace std;

void primefact( int n,int pos)
{
	listsize=0;
	for(int i=0;i<pos;i++)
	{
		
		if(n%primes[i]==0)
		{
			
			while(n%primes[i]==0)
			{
				n/=primes[i];
				
				
				list[listsize++]=primes[i];
				
				
			}
				
		}
			
	}
	
	if(n>1)
	list[listsize++]=n;
	return ;
}

void sieve(int n)
{
	
	cnt=0;
	primes[cnt++]=2;
	
	for(int i=3;i<=n;i+=2)
	{
		
		if(flag[i]==0)
		{
			
			primes[cnt++]=i;
			
		}
		if(i<=n/i)
		{
			for(int j=i*i;j<=n;j+=2*i)
			{
				
				flag[j]=1;
				
			}
				
		}
		
		
	}
		
	return ;
}

int main()
{
	int N,j,key;
	sieve(200);
   char str[100];
   char s[2] = " ";
   char *token;
   int arra[3000];
   
   while(gets(str))
   {
   	pos=0,number=1;
   	if(strcmp(str,"0")==0)
   	break;
   	token = strtok(str,s);
   
   
   while( token != NULL ) 
   {
      
    arra[pos++]=atoi(token);
    
      token = strtok(NULL,s);
   }
   
   for(int i=0;i<pos-1;i+=2)
   number*=pow(arra[i],arra[i+1]);
   
   number--;
  
   N=sqrt(number);
  
   for(j=0;j<cnt;j++)
		if(primes[j]>N)
		break;	
   
   primefact(number,j); 
   
   for(int i=listsize-1;i>=0;)
   {
   	pos=0;
   	if(i==listsize-1)
   	printf("%d",list[i]);
   	else
   	printf(" %d",list[i]);
   	for(int k=i;k>=0;k--)
   	{
   		if(list[i]==list[k])
   		pos++;
   		else
   		break;
   	}
   	printf(" %d",pos);
   	i=i-pos;
   }
   printf("\n");
}
   return(0);
}

