#include<bits/stdc++.h>
using namespace std;

long int arra[2000000];
int div_count(long int n)
{
	int pos=0;
	
	for (long int i = 1; i * i <= n; i++) 
  {
    if (i * i == n) 
	{
      arra[pos++]=i;
    } else if (n % i == 0) 
	{
      arra[pos++]=i;
      arra[pos++]=n/i;
    }
  }
  
  return pos;
}

int main()
{
	int test,cnt=1,pos;
	long int c,r;
	cin>>test;
	
	while(test--)
	{
		scanf("%ld %ld",&c,&r);
		if(c==r)
		printf("Case #%d: 0\n",cnt++);
		else
		{
			pos=div_count(c-r);
		sort(arra,arra+pos);
		printf("Case #%d:",cnt++);
		for(int i=0;i<pos;i++)
		{
			if(arra[i]>r)
			printf(" %d",arra[i]);
		}
		printf("\n");
		memset(arra,0,sizeof(long int)*(pos+2));
		}
		
	}
	return 0;
}
