#include<bits/stdc++.h>
using namespace std;

map<string,int> entry;
vector<string>store;
map<string,bool>visited;
bool flag=false;

int main()
{
	double ans;
	int test;
	string input;
	cin>>test;
	getchar();
	getchar();
	while(test--)
	{
		int total=0;
		while(getline(cin,input))
		{
			if(input=="")
			break;
			if(!visited[input])
			{
				store.push_back(input);
				visited[input]=true;
			}
			
			entry[input]++;
			total++;
		}
		
		sort(store.begin(),store.end());
	
	      if(flag==true)
	      printf("\n");
		for(int i=0;i<store.size();i++)
		{
			
			ans=(100)*(double)entry[store[i]];
			ans=ans/(double)total;
			
			printf("%s %0.4lf\n",store[i].c_str(),ans);
		}
		flag=true;
		visited.clear();
		store.clear();
		entry.clear();
	}
	
	
	return 0;
}
