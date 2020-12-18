#include<bits/stdc++.h>
using namespace std;


vector<pair<char,int> >ans(3000);
bool color[55][55];
char grid[55][55];
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
	cnt++;
	dfs(i-1,j);
	dfs(i,j+1);
	dfs(i,j-1);
	dfs(i+1,j);

}
int main()
{
	
	int test,pos;
	char input;

	
	while(1)
	{
		pos=0;
		cin>>row>>col;
		getchar();
          if(row==0 and col==0) return 0;
          
          
		for(int i=0;i<row;i++)
		for(int j=0;j<col;j++)
		{
			cin>>input;
			grid[i][j]=input;
			
		}
		
		printf("Problem %d:\n",p++);
		
		for(int i=0;i<row;i++)
		for(int j=0;j<col;j++)
		{
			
			if(color[i][j]==0 and grid[i][j]!='.')
			{
				cnt=0;
				key=grid[i][j];
				dfs(i,j);
				ans[pos].first=key;
				ans[pos].second=cnt;
				pos++;
			}
		}
		 
		
		 sort(ans.begin(),(ans.begin()+pos),compare);
		 
		 int knt=0,start=0;
		 
		for(int i=0;i<pos; )
		 {
		 	int temp=ans[i].second;
		   while(ans[i].second==temp and i<pos )
		   {
			knt++;
			i++;
		   }
		sort(ans.begin()+start,ans.begin()+knt,compare1);

		start=i;			
		 	
		 }
		 for(int i=0;i<pos;i++)
		 cout<<ans[i].first<<" "<<ans[i].second<<endl;
		 
		memset(color,0,sizeof(color));
		ans.clear();
		
	}
	return 0;
}
