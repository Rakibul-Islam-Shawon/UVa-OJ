#include<stdio.h>
#include<math.h>
using namespace std;

int countDivisor(int n)
 {
  int divisor = 0;
  for (int i = 1; i * i <= n; i++)
   {
    if (i * i == n)
	{
      divisor+=i;
    } 
	else if (n % i == 0)
	{
      divisor+=i;
      divisor+=n/i;
    }
  }
  return divisor;
}


int main()
{
	int s,ret,flag,i,test=1;
	
	while(scanf("%d",&s)==1)
	{
		
		if(s==0)
		return 0;
		flag=0;
		for(i=s;i>=0;i--)
		{
			ret=countDivisor(i);
			if(ret==s)
			{
				flag=1;
				printf("Case %d: %d\n",test++,i);
				break;
			}
		}
		
		if(flag==0)
		printf("Case %d: -1\n",test++);
		
		
		
		
	}
	return 0;
}
