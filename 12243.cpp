#include<bits/stdc++.h>

using namespace std;

int main()
{
	bool flag=false;
	char check;
	
	string token,input;
	while(getline(cin,input))
	{
		stringstream sso;
		flag=false;
		
		if(input=="*")
		return 0;
		
		transform(input.begin(),input.end(),input.begin(),::tolower);
		
		sso<<input;
		sso>>token;
		check=token[0];
		while(sso>>token)
		{
			if(token[0]!=check)
			{
				flag=true;
				break;
			}
			
		}
		if(flag==true)
		printf("N\n");
		else
		printf("Y\n");
		
	}
	
	return 0;
}
