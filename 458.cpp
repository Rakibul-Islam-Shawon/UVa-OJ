#include<bits/stdc++.h>

using namespace std;

int main()
{
	
	string line,ans;
	char token;
	int len;
	while(getline(cin,line))
	{
		
		len=line.size();
		ans="";
		for(int i=0;i<len;i++)
		{
			token=line[i]-7;
			ans+=token;
		}
		
		cout<<ans<<endl;
	}
	return 0;
}
