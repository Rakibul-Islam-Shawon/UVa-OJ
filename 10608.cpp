#include<bits/stdc++.h>
 
using namespace std;
 
int rankof[200005];
map<int,int> par;

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
    int test,node,pairs,max;
    scanf("%d",&test);
    while(test--)
    {
        scanf("%d %d",&node,&pairs);
		 int x,y;
    
        makeset(node);
        max=0;
        for(int i=0;i<pairs;i++)
        {
            
            scanf("%d %d",&x,&y);
                
            int u = find(x);
            int v = find(y);
            
            if(u!=v)
            {
                rankof[u] = rankof[v] + rankof[u];
                
                par[v] = par[u];
                
            }
            
            if(rankof[par[u]]>max)
            max=rankof[par[u]];
        }
        
        cout<<max<<endl;
        par.clear();
    }
    return 0;
}
