#include<bits/stdc++.h>

using namespace std;

int main()
{
	int count;
	bool flag;
	string str;
	while(getline(cin,str))
	{
		flag=false;
		count=0;
		int i=0;
		
		while(i<str.size())
		{
			
		while(isalpha(str[i]) and i<str.size())
		{
			
			i++;
			flag=true;
		}	
		if(!isalpha(str[i]) and flag==true)
		{
			count++;
			flag=false;
		}
		
		i++;
			
		}
		
		cout<<count<<endl;
		
	}
	
	return 0;
}
