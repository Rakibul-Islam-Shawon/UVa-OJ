#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <cstdlib>
#include <cstdio>
#include <algorithm>
#include<string.h>
using namespace std;

int main()
{
	char ch;
	vector<string>line(1000001);
	vector<string>output(1000001);
	stringstream sso;
	int test,size,count,mark;
	char *token;
	cin>>test;
	
	while(test--)
	{
		
		cin>>size;
		getchar();

		for(int i=0;i<size;i++)
		{
			mark=0;
			cin>>line[i];
			
			output[i]="";
		for(int j=0;j<line[i].size();j++)
		{
			if(line[i][j]=='-')
			continue;
			ch=line[i][j];
			if(isalpha(ch))
			{
				if(ch>'Q')
				ch--;
				ch=(ch - 'A') / 3 + 2 + '0';
				output[i]+=ch;
			}
			else
			output[i]+=ch;
			
		}
		output[i].insert(output[i].begin()+3,'-');
			
		}
		
		sort(output.begin(),output.begin()+size);
		
		count=1;
		for(int i=0;i<size;i++)
		{
			if(output[i]==output[i+1])
			count++;
			else
			{
				if(count>1)
				{
				cout<<output[i]<<" "<<count<<endl;
				mark=1;	
				}
				count=1;
			}
		}
		
		if(mark==0)
		printf("No duplicates.\n");
		if(test)
		printf("\n");
		
		
	}
	
	
	return 0;
}
