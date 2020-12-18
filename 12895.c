#include<stdio.h>
#include<math.h>


int main()
{
   long int number, sum, temp, remainder,n,i;
 
   scanf("%ld",&n);
   
 while(n--)
 {
 	
 	scanf("%ld",&number);
 	
 
 for(i=1;i<20;i++)
 {
    sum=0;
 	temp = number;
 	while( temp != 0 )
   {
   	
      remainder = temp%10;
      sum = sum + pow(remainder,i);
      if(sum>number)
      break;
      temp = temp/10;
      
   }
   if ( number == sum )
   {
   	printf("Armstrong\n");
      break;
   }
 } 
 
 if(number!=sum)
   	printf("Not Armstrong\n");
   	
   
 }
   
   return 0;
}
