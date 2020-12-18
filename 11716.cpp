#include<bits/stdc++.h>
using namespace std;

int main()
{
	char temp[1000+5][1000+5];
	string input;
	int test,len,cnt;
	float check;
	cin>>test;
	getchar();
	while(test--)
	{
		getline(cin,input);
		len=input.size();
		check=sqrt(len);
		if(check!=sqrt(len))
		{
			printf("INVALID\n");
		}
		else
		{
			cnt=0;	
			for(int i=0;i<check;i++)
			{
				for(int j=0;j<check;j++)
				{
					temp[i][j]=input[cnt++];
					
				}
			}
			
			for(int j=0;j<check;j++)
			{
				for(int i=0;i<check;i++)
				{
					printf("%c",temp[i][j]);
					
				}
				
			}
			printf("\n");
			
		}
		
	}
	
	return 0;
}
