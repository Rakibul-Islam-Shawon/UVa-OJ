#include<bits/stdc++.h>
using namespace std;

int main()
{
	bool flag;
	char token;
	string input;
	int temp,count=0;
	while(getline(cin,input))
	{
		flag=false;
		int i=0;
		int n1=0,n2=0,ans=0;
		while(input[i]!='+' and input[i]!='-')
		{
			temp=input[i]-48;
			n1+=temp;
			n1*=10;
			
			i++;
		}
		n1/=10;
		token=input[i];
		i++;
		
		while(input[i]!='=')
		{
		    temp=input[i]-48;
			n2+=temp;
			n2*=10;	
				
			i++;
		}
		
		n2/=10;
		i++;
	
		if(input[i]=='?')
		{
			flag=true;
		}
		else
		{
		while(i<input.size())
		{
			temp=input[i]-48;
			ans+=temp;
			ans*=10;	
				
			i++;
		}
		ans/=10;	
		}
		
		if(flag!=true)
		{
			if(token=='+')
			{
				if(n1+n2==ans)
				count++;
			}
			else
			{
				if(n1-n2==ans)
				count++;
			}
		}
			
	}

     printf("%d\n",count);
     
	return 0;
}
