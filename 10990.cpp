#include<bits/stdc++.h>

int phi[2000002];
int freq[2000002];
void calculatePhi(int M) 
{
  for (int i = 1; i <M; i++)
  {
    phi[i] = i;
  }
  for (int p = 2; p <M; p++)
   {
    if (phi[p] == p)
	 { 
      for (int k = p; k <M; k += p)
	  {
        phi[k]-=phi[k] / p;
      }
    }
  }
}
void ret(void)
{
	int count,i,ans;
	for(i=2;i<=2000000;i++)
		{
			count=0;
			ans=i;
			while(ans!=1)
			{
				ans=phi[ans];
				
				count++;
			}
		freq[i]=count;	
		}
}
int main()
{
	calculatePhi(2000001);
	ret();
	
	int n,m,test,ans,count,i;
	
	scanf("%d",&test);
	
	while(test--)
	{
		scanf("%d %d",&m,&n);
		ans=0;
		for(i=m;i<=n;i++)
		{
			
			ans+=freq[i];
		}
		printf("%d\n",ans);
	}
	
	return 0;
}
