#include<bits/stdc++.h>

using namespace std;

int main()
{
	char *token;
	int temp,range,p;
	string input,ans;
	stringstream sso;
	while(getline(cin,input))
	{
		if(input=="")
		printf("\n");
		
		token=strtok(&input[0],"!");
		while(token)
		{
			for(int i=0;i<strlen(token);i++)
			{
				range=0;
				while(isdigit(token[i]))
				{
					sso<<token[i];
					sso>>temp;
					range+=temp;
					i++;
					sso.clear();
				}
				p=1;
				while(p<=range)
				{
					if(token[i]=='b')
					ans+=' ';
					else
					ans+=token[i];
					p++;
				}
				
			}
			cout<<ans<<endl;
			ans="";
			token=strtok(NULL,"!");
		}
	}
	
	return 0;
}
