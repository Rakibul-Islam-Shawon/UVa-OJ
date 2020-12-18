#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	bool flag;
	int arra[1430];
	while(scanf("%d",&n)!=0)
	{
		if(n==0)
		return 0;
		flag=false;
		for(int i=0;i<n;i++)
		scanf("%d",&arra[i]);
		
		sort(arra,arra+n);
		
		if(arra[0]!=0)
		printf("IMPOSSIBLE\n");
		else
		{
			for(int i=0;i<n-1;i++)
		if(arra[i+1]-arra[i]>200)
		{
			flag=true;
			break;
		}
		if(flag==false)
		{
		if(1422-arra[n-1]<=100)
		printf("POSSIBLE\n");
		else
		printf("IMPOSSIBLE\n");	
		}
		else
		printf("IMPOSSIBLE\n");
		}
		
	}
	
}
