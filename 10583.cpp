#include<bits/stdc++.h>
using namespace std;

int test=1;
map<int,int>par;
map<int ,bool>visited;

void makeset(int n)
{ 
		par[n] = n; 
		
}
 
int find(int x)
{
    if(par[x]!=x)
     par[x] = find(par[x]);
    return par[x];
}
 
 int main()
 {
 	int n,m,x,y,u,v,temp;
 	
 	while(cin>>n>>m)
 	{
 		if(n==0 and m==0)
 		return 0;
 		for(int i=1;i<=n;i++)
 		makeset(i);
 		
 		for(int i=0;i<m;i++)
 		{
 			
 			cin>>x>>y;
 			
 			  u = find(x);
              v = find(y);
            
            if(u!=v)  par[v] = par[u];
                   
 		}
 		int cnt=0;
 		for(int i=1;i<=n;i++)
 		{
 			temp=find(i);
 			
 			if(visited[par[i]]==false)
 			{
 				cnt++;
 				visited[par[i]]=true;
 			}
 		}
 		
 		printf("Case %d: %d\n",test++,cnt);
 		
 		visited.clear();
 		par.clear();
 	}
 }
