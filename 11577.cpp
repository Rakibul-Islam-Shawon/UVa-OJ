#include<bits/stdc++.h>
using namespace std;

int ans[29];

int search(string input)
{
	char token;
	int temp,max;
	memset(ans,0,sizeof(int)*28);
	char test[]="abcdefghijklmnopqrstuvwxyz";
	
	for(int i=0;i<strlen(test);i++)
	{
		for(int j=0;j<input.size();j++)
		{
			temp=(int)test[i]-'a';
			token=tolower(input[j]);
			if(test[i]==token)
			{
			ans[temp]++;	
			}
		}
	}
	max=*max_element(ans,ans+26);
	
	for(int i=0;i<strlen(test);i++)
	{
		temp=(int)test[i]-'a';
		if(ans[temp]==max)
		printf("%c",test[i]);
	}
	printf("\n");
	return 0;
}

int main()
{
	int test;
	string input;
	
	cin>>test;
	getchar();
	while(test--)
	{
		getline(cin,input);
		
		search(input);
		
		
	}
	return 0;
}
