#include<stdio.h>
#include<math.h>
#include<iostream>
#include<stdlib.h>
#include<algorithm>
#include<string.h>
int List[108]={0};
int primes[]={2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53,
59,61,67,71,73,79,83,89,97}; 
int listSize=0,cnt;   
using namespace std;

void primeFactorize( int n)
 {
     
   
    for(int i = 0;primes[i]<=sqrt(n);i++ ) 
	{ 
        if( n % primes[i] == 0 ) 
		{ 
            while( n % primes[i] == 0 )
			 {
			 	List[primes[i]]++;
                n /= primes[i]; 
			
            }
            
        }
    }
    
    if( n > 1 ) 
	{
        
        List[n]++;
    }
    
    return;
}
int main() 
{
	
	int n,count;
	while(scanf("%d",&n)==1)
	{
		if(n==0)
		return 0;
		count=0;
		int main=n;
	
		while(n>1)
	{
		primeFactorize(n);
		n--;
	}
    printf("%3d! =",main);
    for( int i = 2; i <=main; i++ ) 
    {
    	if(List[i]!=0)
    	{
    		if(count==15)
    		printf("\n      ");
    		printf("%3d", List[i]);
    	List[i]=0;
    	count++;
    	}
    	
    }
        
        printf("\n");
        
        
	}
	
    return 0;
}

