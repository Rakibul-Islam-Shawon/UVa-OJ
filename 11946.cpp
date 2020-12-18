#include<bits/stdc++.h>

using namespace std;

int main()
{
	bool flag;
	int test,i;
	string input;
	
	cin>>test;
	getchar();
	
	while(test--)
	{
	
	for( i=0; ;i++)
		{
			getline(cin,input);
			
			if(input.size()==0)
			break;
	
			for(int k=0;k<input.size();k++)
			{
				 if(input[k]=='0')
				input[k]='O';
				else if(input[k]=='1')
				input[k]='I';
				else if(input[k]=='2')
				input[k]='Z';
				else if(input[k]=='3')
				input[k]='E';
				else if(input[k]=='4')
				input[k]='A';
				else if(input[k]=='5')
				input[k]='S';
				else if(input[k]=='6')
				input[k]='G';
				else if(input[k]=='7')
				input[k]='T';
				else if(input[k]=='8')
				input[k]='B';
				else if(input[k]=='9')
				input[k]='P';
			}
			
			cout<<input<<endl;
		}	
	    if(test)
		printf("\n");
	}
	
	return 0;
}
