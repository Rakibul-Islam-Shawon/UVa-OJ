#include<bits/stdc++.h>
 
using namespace std;
 
int rankof[200005];
map<int,int> par;
map<char,int>Index;

void makeset(int n)
{
		par[n] =n; 
		rankof[n] = 1;
		
}
 
int find(char x)
{
    if(par[x]!=x)
     par[x] = find(par[x]);
    return par[x];
}
 
int main()
{
	char a,b,c,x,y;
    int temp,node,pairs,max,u,v;
   bool check=false;
   
    while(scanf("%d",&node)!=EOF)
    {
    	bool flag=false;
    	int index=1,days=0;
    	scanf("%d",&pairs);
    	getchar();
    	scanf("%c%c%c",&a,&b,&c);
    	
    	if(!Index[a])
    	{
    		Index[a]=index++;
    		makeset(Index[a]);
    	}
    	if(!Index[b])
    	{
    		Index[b]=index++;
    		makeset(Index[b]);
    	}
    	if(!Index[c])
    	{
    		Index[c]=index++;
    		makeset(Index[c]);
    	}
		     u = find(Index[a]);
             v = find(Index[b]);
            
            if(u!=v)
            {
                rankof[u] = rankof[v] + rankof[u]; 
                par[v] = par[u];
  
            }
             u = find(Index[b]);
             v = find(Index[c]);
            
            if(u!=v)
            {
                rankof[u] = rankof[v] + rankof[u];
                par[v] = par[u];
    
            }
            getchar();
            
        for(int i=0;i<pairs;i++)
        {
             
            scanf("%c%c",&x,&y);
                
                if(!Index[x])
    	{
    		Index[x]=index++;
    		makeset(Index[x]);
    	}
    	if(!Index[y])
    	{
    		Index[y]=index++;
    		makeset(Index[y]);
    	}
             u = find(Index[x]);
             v = find(Index[y]);
             
            if(u!=v)
            {
    
            	if(rankof[u]>=3 or rankof[v]>=3)
            	{
            		rankof[u] = rankof[v] + rankof[u];
            		par[v] = par[u];
            		days++;
            	}
                else
                {
                	flag=true;
                }
                 
            }
           
        }
    
        if(flag==true or pairs==0)
        printf("THIS BRAIN NEVER WAKES UP\n");
        else
        printf("WAKE UP IN, %d, YEARS\n",days);
        
        par.clear();
        Index.clear();
       
    }
    return 0;
}
