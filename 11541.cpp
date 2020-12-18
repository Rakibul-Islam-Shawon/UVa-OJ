#include<bits/stdc++.h>
using namespace std;

int main()
{
	string temp,token,ans;
	int test,len,count,cnt=1;
	string input;
	cin>>test;
	getchar();
	while(test--)
	{
		
		getline(cin,input);
		len=input.size();
		
		for(int i=0;i<len; )
		{
			
			if(isalpha(input[i]))
			{
				token=input[i++];
				
				while(!isalpha(input[i]) and i<len)
				{
					temp+=input[i++];
					stringstream sso;
					sso<<temp;
					sso>>count;
					
				}
				
				for(int j=1;j<=count;j++)
				ans+=token;
				
				temp="";
				count=0;
			}
			
		}
		printf("Case %d: ",cnt++);
		cout<<ans<<endl;
		ans="";
	}
	
	return 0;
	
}
