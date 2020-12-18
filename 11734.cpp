#include<bits/stdc++.h>
using namespace std;

int main()
{
	
	stringstream sso;
	bool flag;
	int test,cnt=1;
	string team,judge,temp,ans;
	cin>>test;
	getchar();
	while(test--)
	{
		getline(cin,team);
		getline(cin,judge);
		flag=false;
		for(int i=0;i<team.size();i++)
		{
			if(team[i]==' ')
			{
				flag=true;
				break;
			}
			
		}
		if(flag==true)
		{
			sso<<team;
			while(sso>>temp)
			{
				ans+=temp;
			}
			if(ans==judge)
			{
			printf("Case %d: Output Format Error\n",cnt++);	
			}
			else
			printf("Case %d: Wrong Answer\n",cnt++);
			
			sso.clear();
			ans="";
		}
		else if(team==judge)
		printf("Case %d: Yes\n",cnt++);
		else
		printf("Case %d: Wrong Answer\n",cnt++);
	}
}
