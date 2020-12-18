#include<bits/stdc++.h>
using namespace std;

map<string,int>Index;
map<string,bool>visited;
vector<string>vec;
int main()
{
	string input;
	stringstream sso;
	string token;
	 while(getline(cin,input))
	{
		
		sso<<input;
		
		while(sso>>token)
		{
			Index[token]++;
			
			if(visited[token]!=true)
			{
				vec.push_back(token);
				visited[token]=true;
			}
		}
		sso.clear();
		
		
	}

	     for(int i=0;i<vec.size();i++)
		{
				cout<<vec[i]<<" "<<Index[vec[i]]<<endl;
			
		}
		
		sso.clear();
		visited.clear();
		Index.clear();
		
	return 0;
}
