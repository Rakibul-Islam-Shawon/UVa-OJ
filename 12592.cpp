#include<bits/stdc++.h>
using namespace std;

map<string,string>vec;
int main()
{
    int n,query;
	string line1,line2,input;	
	while(cin>>n)
	{
		getchar();
		for(int i=0;i<n;i++)
		{
			
			getline(cin,line1);
			getline(cin,line2);
			
			vec[line1]=line2;
		}
		
		cin>>query;
		getchar();
		for(int i=0;i<query;i++)
		{
			getline(cin,input);
			cout<<vec[input]<<endl;
		}
		
	}
	
	return 0;
}
