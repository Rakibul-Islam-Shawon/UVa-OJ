#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,test,arra[100000+5],maxval,maxdiff;
	
	cin>>test;
	arra[0]=-1;
	while(test--)
	{
		
		cin>>n;
		
		for(int i=1;i<=n;i++)
		{
			
			scanf("%d",&arra[i]);
		}
		maxdiff=-30000;
		maxval=-30000;
		for(int i=1;i<=n-1;i++)
		{
		 if(arra[i]>maxval)
		 maxval=arra[i];
		 
		 if(maxval-arra[i+1]>maxdiff)
			maxdiff=maxval-arra[i+1];
			
		}
		
		
		printf("%d\n",maxdiff);
	}
	
	return 0;
}
