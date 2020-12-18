#include<bits/stdc++.h>
using namespace std;

int main()
{
	bool flag=false;
	stringstream sso;
	string input,temp,token,ans;
	
	int max=0,i;
	while(getline(cin,input))
	{
		sso<<input;
	
	while(sso>>temp)
	{
		if(temp=="E-N-D")
		{
			flag=true;
			break;
		}
		
		for(i=0;i<temp.size();i++)
		{
			if(isalpha(temp[i]))
			{
			break;
			}
		}
		while(isalpha(temp[i]) or temp[i]=='-')
		{
			token+=temp[i];
			
			i++;
		}
		if(token.size()>max)
		{
			max=token.size();
			ans=token;
		}
		
		token="";
	}
	sso.clear();
	
	if(flag==true)
	break;
	}
	transform(ans.begin(), ans.end(), ans.begin(), ::tolower);
	
	cout<<ans<<endl;
	
	return 0;
}
