#include<bits/stdc++.h>
using namespace std;

int main()
{
	
	int max,count;
	string input,ans;
	char key;
	while(getline(cin,input))
	{
		max=0;
		sort(input.begin(),input.end());
		
		int cnt=0;
		while(!isalpha(input[cnt]))
		{
			cnt++;
		}
		for(int i=cnt;i<input.size(); )
		{
			count=0;
			key=input[i];
			while(key==input[i])
			{	
					i++;
				count++;
			}
			if(count>=max)
			{
				
				max=count;
				
			}
		}
		for(int i=cnt;i<input.size(); )
		{
			count=0;
			key=input[i];
			while(key==input[i])
			{	
					i++;
				count++;
			}
			if(count==max)
			{
				ans+=key;
				
			}
		}
		
		printf("%s %d\n",ans.c_str(),max);
		ans="";
	}
	
	return 0;
}
