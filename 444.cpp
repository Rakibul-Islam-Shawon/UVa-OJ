#include<bits/stdc++.h>

using namespace std;


string encode(string input)
{
	
	string ans,token;
	int len,temp;
	
	len=input.size();
	
	for(int i=0;i<len;i++)
	{
		stringstream sso;
		
		temp=input[i];
		
		sso<<temp;
		
		sso>>token;
		
		ans+=token;
	}
	
	reverse(ans.begin(),ans.end());
	
	return ans;
}

string decode(string input)
{
	int token;
	string ans;
	string temp;
	int len=input.size();
	
	for(int i=0;i<len; )
	{
		if(input[i]=='1')
		{
			int cnt=1;
			for(; cnt<=3;)
			{
				temp+=input[i++];
				
				cnt++;
			}
			stringstream sso;
			sso<<temp;
			sso>>token;
			
			ans+=(char)token;
			
		temp="";	
		}
		else
		{
			int knt=1;
			for(; knt<=2;)
			{
				temp+=input[i++];
				
				knt++;
			}
			
		stringstream sso;
			sso<<temp;
			sso>>token;
				ans+=(char)token;
				
		temp="";	
		}
		
		
		
	}
	
	return ans;
}
int main()
{
	int temp;
	string input,ans;
	
	while(getline(cin,input))
	{
		
		if(input[0]=='0' or input[0]=='1' or input[0]=='2' or input[0]=='3' or input[0]=='4' or input[0]=='5' or input[0]=='6' or input[0]=='7' or input[0]=='8' or input[0]=='9')
		{
			reverse(input.begin(),input.end());
			
			ans=decode(input);
			cout<<ans<<endl;
		}
		else
		{
			ans=encode(input);
			cout<<ans<<endl;
		}
		
		
	}
	
	return 0;
}
