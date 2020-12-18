#include<bits/stdc++.h>

using namespace std;


void bfs(string src,string dest,map<string,vector<string> >graph)
{

	queue<string>Q;
	Q.push(src);
	map<string,int>level,visited;
	visited[src]=1; 
    level[src]=0;
	while(!Q.empty())
	{
		string u=Q.front(); 
		for(int i=0;i<graph[u].size();i++)
		{
			string v=graph[u][i];
			if(!visited[v])
			{
				level[v]=level[u]+1; 
				visited[v]=1;
				Q.push(v);
			}
		}
		Q.pop();
	}
	
		printf("%s %s %d\n",src.c_str(),dest.c_str(),level[dest]);
	
		return ;
}
int main()
{
	stringstream sso;
	char temp1[100],temp2[100],line[200];
	map<string,vector<string> >graph;
	string str,src,dest,input;
	vector<string>save;
	int set;
	cin>>set;
	getchar();
	getchar();
	while(set--)
	{
		
		while(cin>>str)
		{
			if(str=="*")
			break;
			save.push_back(str);	
			
		}
		
	for(int i=0;i<save.size();i++)
	{
	for(int j=0;j<save.size();j++)
	{
		int k=0,count=0;
		while(k<save[i].size() or k<save[j].size())
		{
			if(save[i][k]!=save[j][k])
			count++;
			k++;
		}
		if(count==1)
		{
			
		graph[save[i]].push_back(save[j]);	
		}	
	}

	}
	getchar();
	while(1)
	{
        getline(cin,input);
        
        if(input=="")
        break;
        sso<<input;
        sso>>src;
        sso>>dest;
		bfs(src,dest,graph);
		sso.clear();
	
	}
		graph.clear();
		save.clear();
		if(set)
		printf("\n");
	}
	return 0;
}
