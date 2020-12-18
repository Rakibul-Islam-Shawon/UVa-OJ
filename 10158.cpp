#include<bits/stdc++.h>
 
using namespace std;
 
bool enemy[10000+5][10000+5],friends[10000+5][10000+5];


map<int,int>setsize,rankof;
map<int,int>par;

void makeset(int n)
{
    for(int i=0; i<n; i++)
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
    int node,u,v,command,x,y;

        int test;
        
        scanf("%d",&node);
        
        makeset(node);
        
        while(cin>>command>>x>>y)
        {
            if(command==0 and x==0 and y==0)
            return 0;
                
                if(command==1)
                {
                	if(enemy[par[x]][par[y]])
                	{
                		printf("-1\n");
                	}
                	else
                	{
                		
                	u = find(x);
                    v = find(y);
						
                		      
                    if(u!=v)
                   {	
                   if(rankof[u]>rankof[v])
                    {
    	            par[v]=u;
    	            setsize[find(u)] += setsize[find(v)];
                    }
                   else
	                {
                    par[u]=v;
                    if (rankof[u]==rankof[v]) rankof[v]++;
		            setsize[find(v)] += setsize[find(u)];
		            
                    }
    
                    }
                	  friends[par[x]][par[y]]=true;	
                	  
                	}
                	
                }
                
                else if(command==2)
                {
                        
					  
					  	if(friends[par[x]][par[y]])
                	{
                		printf("-1\n");
                	}
                	else
                	{
                		
                	u = find(x);
                    v = find(y);
						
                		      
                    if(u!=v)
                   {	
                   if(rankof[u]>rankof[v])
                    {
    	            par[v]=u;
    	            setsize[find(u)] += setsize[find(v)];
                    }
                   else
	                {
                    par[u]=v;
                    if (rankof[u]==rankof[v]) rankof[v]++;
		            setsize[find(v)] += setsize[find(u)];
		            
                    }
    
                    }
                	 enemy[par[x]][par[y]]=true;		
                	}	
                }
                else if(command==3)
                {
                	 u = find(x);
                     v = find(y);
                    
                    if(friends[u][v] and u==v)
                    {
                    	printf("1\n");
                    }
                    else 
                    printf("0\n");
                }
                else
                {
                	u = find(x);
                     v = find(y);
                    
                    if(enemy[u][v])
                    {
                    	printf("1\n");
                    }
                    else 
                    printf("0\n");
                	
                }
            
        }
        
    
    return 0;
}
