#include<bits/stdc++.h>
using namespace std;

int main()
{
	
	string input,ans,temp;
	stringstream sso;
	char *token;
	bool flag;
	while(getline(cin,input))
	{	
		token=strtok(&input[0]," ");
		flag=true;
		while(token)
		{
			temp=token;
			reverse(temp.begin(),temp.end());
			if(flag==false)
			ans+=" ";
			ans+=temp;
			token=strtok(NULL," ");
			flag=false;
		}
	    
	    cout<<ans<<endl;
	    
	    ans="";
	}
	
	return 0;
}
