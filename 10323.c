#include<stdio.h>

int main()
{
    int t;
    int a[200]; 
    long long n;
	int i,j,temp,m,x;
    
    while(scanf("%lld",&n)!=EOF)
    {
    	if(n<0)
    	{
    		n=(-1)*n;
    		if(n%2==0)
    		printf("Underflow!\n");
    		else
    		printf("Overflow!\n");
    	}
       else if(n>=0&&n<=7)
       printf("Underflow!\n");
       else if(n>13)
       printf("Overflow!\n");     
       else
       {
       	a[0]=1;  
       m=1;    

       temp = 0; 
       for(i=1;i<=n;i++)
       {
            for(j=0;j<m;j++)
            {
               x = a[j]*i+temp; 
               a[j]=x%10; 
               temp = x/10; 
            }
             while(temp>0)
             { 
               a[m]=temp%10;
               temp = temp/10;
               m++;
             }
      }
              for(i=m-1;i>=0;i--) 
              printf("%d",a[i]);
              printf("\n");
       }
       
    }
    return 0;
}
