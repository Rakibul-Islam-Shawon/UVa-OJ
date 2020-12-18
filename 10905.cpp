#include<bits/stdc++.h>

using namespace std;

int main()
{
	bool flag;
char  var[10000];
	char  *token;
	int n;
	string temp;
	string store[55];
	while(1)
	{
		scanf("%d",&n);
		getchar();
		if(n==0)
		return 0;
		int i=0;
		gets(var);
		
		token=strtok(var," ");
		
		while(token)
		{
			
			store[i++]=token;
			token=strtok(NULL," ");
			
		}
	
	while(1)
	{
		flag=false;
	for(int i=0;i<n-1;i++)
	{
		if((store[i]+store[i+1])<(store[i+1]+store[i]))
		{
			temp=store[i+1];
			store[i+1]=store[i];
			store[i]=temp;
			
			flag=true;
		}
		
	}	
	
	if(flag==false)
	break;
	}
	
	for(int i=0;i<n;i++)
	cout<<store[i];
	cout<<endl;
	}

	return 0;
}
