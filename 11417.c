#include<stdio.h>
#include<math.h>
int rem;
int GCD(int i,int j)
{
	
  while(1)
  {
  	
  	rem=i%j;
  	if(rem==0)
  	{
  		return j;
  		
  	}
  	i=j;
  	j=rem;
  	
  }	
}
int main()
{
	int G,n,i,j;
	
	while(scanf("%d",&n)==1)
	{
		if(n==0)
		return 0;
		
		G=0;

for(i=1;i<n;i++)
{
	for(j=i+1;j<=n;j++)

{

    G+=GCD(i,j);

}

}
     
     printf("%d\n",G);

	}
	
	
	
return 0;	
}
