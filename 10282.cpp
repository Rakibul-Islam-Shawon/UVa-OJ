#include<bits/stdc++.h>
using namespace std;

map<string,string>input;
map<string,bool>mark;

int main()
{
	string english,forign,entry;
	stringstream sso;
	while(1)
	{
		getline(cin,entry);
		if(entry=="")
		break;
		sso<<entry;
		sso>>english;
		sso>>forign;
		sso.clear();
		input[forign]=english;
		mark[forign]=true;
	}

	while(cin>>forign)
	{
		if(mark[forign]==true)
		cout<<input[forign]<<endl;
		else
		cout<<"eh"<<endl;
	}
	return 0;
}
