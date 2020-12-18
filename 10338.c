#include<stdio.h>
#include<string.h>
#include<math.h>

unsigned long long fact(int len)
{
	unsigned long long sum1=1;
	int k;
	for(k=1;k<=len;k++)
		{
			
			sum1*=k;
			
		}
		return sum1;
}
int main()
{
	int n,i,j,len,temp,k,count,t,flag,cnt,flage;
	unsigned long long sum,ans;
	char test[25],check[]="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		sum=1;
		scanf("%s",&test);
		
		len=strlen(test);	
		temp=strlen(check);			
		
		for(j=0;j<temp;j++)
		{
			count=0;
			for(k=0;k<len;k++)
			{
				if(check[j]==test[k])
			count++;
			}
			
			if(count>1)
			{
				ans=fact(count);
				sum=sum*ans;
				
			}
			
			
		}
			
		ans=fact(len);
		ans=ans/sum;
	
       printf("Data set %d: %llu\n",i,ans);
	}
	
	return 0;
	
}
