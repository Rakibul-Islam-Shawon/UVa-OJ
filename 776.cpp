#include<bits/stdc++.h>
using namespace std;

int row,col;
int Index;
char key;
vector<string>grid;
bool color[10000][10000];
int ans[10000][10000];
int w[10000];
void dfs(int i,int j)
{
	if(i<0 or j<0 or i>=row or j>=col or color[i][j]==1 or grid[i][j]!=key) return ;
	
	color[i][j]=1;
	ans[i][j]=Index;
	
	dfs(i-1,j);
	dfs(i,j+1);
	dfs(i,j-1);
	dfs(i+1,j);
	dfs(i-1,j+1);
	dfs(i-1,j-1);
	dfs(i+1,j-1);
	dfs(i+1,j+1);
}

int main()
{
    string temp,save,input;
    stringstream sso;
   while(getline(cin,input))
   {
   	   	
   	    row=0;
   	    save="";
   	 	sso<<input;
   	 	while(sso>>temp)
   	 	{
   	 		save+=temp;
   	 		
   	 	}
   	 	sso.clear();
   	 	grid.push_back(save);
   	     row++;	
   	     
   	 while(getline(cin,input))
   	 {
   	 	
   	 	if(input=="%") break;
   	 	save="";
   	 	sso<<input;
   	 	while(sso>>temp)
   	 	{
   	 		save+=temp;
   	 		
   	 	}
   	 	sso.clear();
   	 	grid.push_back(save);
   	     row++;	
   	 }
   	 
   	 col=grid[0].size();
   	 Index=1;
   	 for(int i=0;i<row;i++)
   	 {
   	 	for(int j=0;j<col;j++)
   	 	{
   	 		key=grid[i][j];
   	 		
   	 		if(color[i][j]==0)
   	 		{
   	 			dfs(i,j);
   	 			Index++;
   	 		}
   	 	}
   	 	
   	 }

   	 for(int j=0;j<col;j++)
   	 {
   	 	int max=0;
   	 	for(int i=0;i<row;i++)
   	 	{
   	 		if(ans[i][j]>max)
   	 		{
   	 			max=ans[i][j];
   	 		}
	 
   	 	}
   	 	     sso<<max;
   	 		 sso>>temp;
   	 		 sso.clear();
   	 		 w[j]=temp.size();
   	 }
   	 for(int i=0;i<row;i++)
   	 {
   	 	cout<<setw(w[0])<<ans[i][0];
   	 	for(int j=1;j<col;j++)
   	 	{
   	 		cout<<" "<<setw(w[j])<<ans[i][j];
   	 	}
   	 	printf("\n");
   	 }
   	 printf("%\n");
   	 memset(ans,0,sizeof(ans));
   	 grid.clear();
   	 memset(color,0,sizeof(color));
   	 memset(w,0,sizeof(w));
   }
   return 0;
}
