#include<bits/stdc++.h>
 
using namespace std;
 
int rankof[200005];
int par[200005];
map<string, int>Index;

void makeset(int n)
{
    for(int i=1; i<=n; i++)
        { 
		par[i] = i; 
		rankof[i] = 1;
		}
}
 
int find(int x)
{
    if(par[x]!=x)
     par[x] = find(par[x]);
    return par[x];
}
 
int main()
{
    int test,n;
    scanf("%d",&test);
    while(test--)
    {
        int test;
        scanf("%d",&n);
        int index = 1;
		 string x,y;
        
        Index.clear();
        makeset(n*2);
        
        for(int i=0; i<n;i++)
        {
            cin>>x>>y;
            if(!Index[x])
                Index[x] = index++;
            if(!Index[y])
                Index[y] = index++;
                
            int u = find(Index[x]);
            int v = find(Index[y]);
            
            if(u!=v)
            {
                rankof[u] = rankof[v] + rankof[u];
                
                par[v] = par[u];
                
            }
            printf("%d\n",rankof[u]);
        }
        
    }
    return 0;
}
