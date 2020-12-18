#include<bits/stdc++.h>
using namespace std;

int main()
{
	float first,last,temp,ans,c;
	int test,n;

	scanf("%d",&test);
	
	while(test--)
	{
		temp=0;
		scanf("%d",&n);
		scanf("%f%f",&first,&last);
		
		if(n==0)
		printf("%0.2f\n",last);
		else
		{
			for(int i=0;i<n;i++)
		{
			scanf("%f",&c);
			temp+=(n-i)*c;	
		}
		temp=2*temp;
		ans=n*first+last-temp;
		ans/=(n+1);
		printf("%0.2f\n",ans);
		}
		 if(test) printf("\n");
	}
	return 0;
}
