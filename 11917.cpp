#include<bits/stdc++.h>
using namespace std;

int cnt=1;
map<string,int>entry;
map<string,bool>visited;
int main()
{
	
	int test,number,time,days;
	string name,assignment;
	cin>>test;
	
	while(test--)
	{
		cin>>number;
		
		for(int i=0;i<number;i++)
		{
			cin>>name>>time;
			entry[name]=time;
			visited[name]=true;
			
		}
		cin>>days;
		getchar();
		cin>>assignment;
		
		if(visited[assignment]!=true)
		printf("Case %d: Do your own homework!\n",cnt++);
		else if(entry[assignment]<=days)
		printf("Case %d: Yesss\n",cnt++);
	    else if(entry[assignment]<=(days+5)) 
		printf("Case %d: Late\n",cnt++);
		else
		printf("Case %d: Do your own homework!\n",cnt++);
		
		visited.clear();
		entry.clear();
	}
	
}
