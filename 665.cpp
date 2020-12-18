#include<bits/stdc++.h>
using namespace std;

int main()
{
	int k,limit,test,cnt,n,ans,arra[1000];
	char sym,chk=false;
	bool check[100],flag;
	cin>>test;
	
	while(test--)
	{
		memset(check,0,sizeof(check));
		cin>>n>>k;
		for(int j=0;j<k;j++)
		{
			
			cin>>limit;
		
		for(int i=0;i<limit*2;i++)
		cin>>arra[i];
		cin>>sym;
		
		if(sym=='=')
		{
			for(int i=0;i<limit*2;i++)
			{
			   check[arra[i]]=true;	
			}
		}
			
			
		}
	   flag=false;
	   cnt=0;
	   for(int i=1;i<=n;i++)
	   {
	   	if(check[i]!=true)
	   	{
	   		ans=i;
	   		flag=true;
	   		cnt++;
	   	}
	   }
	   if(flag==true and cnt>1)
	   {
	   	printf("0\n");
	   	
	   }
	   else
	   printf("%d\n",ans);
	   if(test)
	   printf("\n");
	   
	}
	
	return 0;
}
