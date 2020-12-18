#include<stdio.h>

int main()
{
    int t,ans;
    int a[350000]; 
    int n;
	int i,j,temp,m,x;
    
    while(scanf("%d",&n)!=EOF)
    {
    	ans=0;
      
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
              for(i=0;i<m;i++) 
              {
              	if(a[i]!=0)
              	{
              		ans=a[i];
              		break;
              	}
              }
                  
              printf("%5d -> %d\n",n,ans);
       }
       
    
    return 0;
}
