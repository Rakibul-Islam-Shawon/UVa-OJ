#include<bits/stdc++.h>
using namespace std;
int cnt=1;
int matrix[500][500],next[500][500];
vector<int> path(int i,int j)
{
	vector<int>link;
	
	 link.push_back(i);
   while(i!=j)
   {
   	   i=next[i][j];
       link.push_back(i);
   }
       
   return link;
	
	
}
int main()
{
	vector<int>way;
	pair<int,int>value;
	int n,p,src,dest;
	
	while(1)
	{
		cin>>n;
		if(n==0)
		return 0;
		
		for(int i=1;i<=n;i++)
		for(int j=1;j<=n;j++)
		{
			if(i==j)
			matrix[i][j]=0;
			else
			matrix[i][j]=1000;
			next[i][j]=j;
		}
		
		for(int i=1;i<=n;i++)
		{
		scanf("%d",&p);
		for(int j=0;j<p;j++)
		{
		cin>>value.first>>value.second;	
		matrix[i][value.first]=value.second;
		}
			
		}
		
		cin>>src>>dest;
		
		for (int k=1;k<=n;k++)
        for (int i=1;i<=n;i++)
	    for (int j=1;j<=n;j++)
      {
      	   if (matrix[i][j] > matrix[i][k] + matrix[k][j])
      	   {
      	   	matrix[i][j] = matrix[i][k] + matrix[k][j];
      	   	next[i][j]=next[i][k];
      	   }
             
      }
      way=path(src,dest);
      printf("Case %d: Path =",cnt++);
      for(int i=0;i<way.size();i++)
      printf(" %d",way[i]);
       printf("; %d second delay\n",matrix[src][dest]);   
	}
}
