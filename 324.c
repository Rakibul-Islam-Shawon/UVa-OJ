#include<stdio.h>
int main()
{
	int a[1000],freq[11];
	int n,temp,m,i,k,j,x,ans;
	while(scanf("%d",&n)==1)
	{
		for(i=0;i<10;i++)
	freq[i]=0;
		m=1;
		temp=0;
		a[0]=1;
		for(i=1;i<=n;i++)
		{
			for(j=0;j<m;j++)
			{
				x=a[j]*i+temp;
				a[j]=x%10;
				temp=x/10;
				
			}
			while(temp>0)
			{
				a[m]=temp%10;
				temp=temp/10;	
				m++;	
			}	
			
		}
		for(k=m-1;k>=0;k--)
		freq[a[k]]++;
	
	    printf("%d! --\n   ",n);
	     for(ans=0;ans<10;ans++)
	     {
	     printf("(%d)  %3d    ",ans,freq[ans]);
		 if(ans==4)
		 printf("\n   ");	
	     }
	     printf("\n");
	
	}
	
	return 0;
}


