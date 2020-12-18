#include<cstdio>
#include<algorithm>
#include<string>
#include<iostream>

using namespace std;

int main()
{
	
	string input,temp;
	
	while(1)
	{
		getline(cin,input);
		temp=input;
		sort(temp.begin(),temp.end());
		if(input.size()==1 and input[0]=='#')
		return 0;
		
		next_permutation(input.begin(),input.end());
		if(temp!=input)
		cout<<input<<endl;
		else
		printf("No Successor\n");
	}
	
}
