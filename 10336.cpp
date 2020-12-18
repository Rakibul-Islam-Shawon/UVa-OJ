#include<bits/stdc++.h>
using namespace std;

map<char,int>arra;
vector<char> save;
vector<pair<char,int> >ans(30);
bool check[130];
bool color[35][35];
char grid[35][35];
char key;
int row,col,cnt,p=1;

bool compare(const pair<char ,int>&i, const pair<char ,int>&j)
{
    return i.second > j.second;
}
bool compare1(const pair<char ,int>&i, const pair<char ,int>&j)
{
    return i.first < j.first;
}
void dfs(int i,int j)
{
	if(i<0 or j<0 or i>=row or j>=col or color[i][j]==1 or grid[i][j]!=key) return ;
	
	color[i][j]=1;
	dfs(i-1,j);
	dfs(i,j+1);
	dfs(i,j-1);
	dfs(i+1,j);

}
int main()
{
	
	int test;
	char input;
	cin>>test;
	
	while(test--)
	{
		cnt=0;
		cin>>row>>col;
		getchar();

		for(int i=0;i<row;i++)
		for(int j=0;j<col;j++)
		{
			cin>>input;
			grid[i][j]=input;
			
		}
		
		printf("World #%d\n",p++);
		
		for(int i=0;i<row;i++)
		for(int j=0;j<col;j++)
		{
			
			if(color[i][j]==0)
			{
				
				key=grid[i][j];
				if(!check[key])
				{
					save.push_back(key);
					check[key]=true;
				}
			    arra[key]++;
				dfs(i,j);
				
			}
		}
		 
		 for(int i=0;i<save.size();i++)
		 {
		 	ans[i].first=save[i];
		 	ans[i].second=arra[save[i]];
		 }
		 sort(ans.begin(),(ans.begin()+save.size()),compare);
		 
		 int pos=0,start=0;
		 
		for(int i=0;i<save.size(); )
		 {
		 	int temp=ans[i].second;
		   while(ans[i].second==temp and i<save.size())
		   {
			pos++;
			i++;
		   }
		sort(ans.begin()+start,ans.begin()+pos,compare1);

		start=i;			
		 	
		 }
		 for(int i=0;i<save.size();i++)
		 cout<<ans[i].first<<": "<<ans[i].second<<endl;
		 
		memset(color,0,sizeof(color));
		memset(check,0,sizeof(check));
		save.clear();
		ans.clear();
		arra.clear();
	}
	return 0;
}
