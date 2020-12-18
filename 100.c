#include<stdio.h>
int main()
{
	int n,i,j,k,c,l,count;

	while(scanf("%d %d",&i,&j)==2)
	
	{
	
	printf("%d %d",i,j);
	l=0;
	if(i>j)
	{
		k=j;
		j=i;
		i=k; 
	}
	n=i;
	while(n<=j)
	{
		count=0;
		c=n;
		while(c!=1)
		{
		
		if(c%2==0)
		{
			c=c/2;
			
	}
	
		else{
		
		c=3*c+1;
	
}
	count++;
	
	}
    if(count>=l)
    {
    	l=count;
    }
   n++;
  }
  printf(" %d\n",l+1);
}

return 0;	
}
