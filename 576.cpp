#include<bits/stdc++.h>

using namespace std;

int main()
{
	vector<int>arra;
	string input;
	char *token;
	while(getline(cin,input))
	{
		if(input=="e/o/i") return 0;
		token=strtok(&input[0],"/");
		
		while(token)
		{
			int size;
			size=strlen(token);
				int cnt=0;
			for(int i=0;i<size; )
			{
			
				if( token[i]=='a' or token[i]=='i' or token[i]=='u' or  token[i]=='e' or  token[i]=='y' or token[i]=='o')
				{
					
					i++;
				  while(token[i]=='a' or token[i]=='i' or token[i]=='u' or token[i]=='e' or token[i]=='y' or token[i]=='o')
				  {
				  	i++;
				  	
				  }
				  		cnt++;
				}
				else
				i++;
			
			}
			arra.push_back(cnt);
			
			token=strtok(NULL,"/");
		}
		bool flag=false;
		for(int i=0;i<arra.size();i++)
		{
			if(i==0 and arra[i]!= 5)
			{
				printf("%d\n",i+1);
				flag=true;
				break;
			}
			else if(i==1 and arra[i]!= 7)
			{
				printf("%d\n",i+1);
				flag=true;
				break;
			}
			else if(i==2 and arra[i]!= 5)
			{
				printf("%d\n",i+1);
				flag=true;
				break;
			}
			
			 
		}
		
		if(flag==false)
		printf("Y\n");
		
		arra.clear();
	}
	
	return 0;
}
