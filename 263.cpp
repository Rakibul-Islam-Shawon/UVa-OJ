#include<bits/stdc++.h>
using namespace std;

int main()
{
	stringstream sso;
	string input,ac,dc,temp;
	long int i,n,m,check,ans,arra[1000+5];
	while(getline(cin,input))
	{
		check=-1,i=0;
		if(input=="0")
		break;
		int count=0;
		printf("Original number was %s\n",input.c_str());
		while(1)
		{
		temp=input;
		dc=input;
		
		sort(temp.begin(),temp.end());
		if(temp[0]=='0')
		{
		 ac=temp.substr(1,temp.size());
	
		}
		else
		ac=temp;
		
		 sort(dc.begin(), dc.end(),greater<int>());
		
		sso<<ac;
		sso>>n;
		sso.clear();
		sso<<dc;
		sso>>m;	
		sso.clear();
		ans=m-n;
		printf("%d - %d = %d\n",m,n,ans);
		count++;
		if(binary_search (arra,arra+i,ans))
		break;
		else
		{
			arra[i]=ans;
			sort(arra,arra+(i+1));
			i++;
		}
		if(ans==0)
		{
		printf("%d - %d = %d\n",0,0,0);
		count++;
		break;	
		}
		
		check=ans;
		sso<<ans;
		sso>>input;
		sso.clear();
		
		}
		printf("Chain length %d\n\n",count);
		
	}
	
	return 0;
}
