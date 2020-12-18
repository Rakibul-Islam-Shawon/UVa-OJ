#include<bits/stdc++.h>
 
using namespace std;
 
map<int,int>par;
map<int,bool>visited;

void makeset(int n)
{
par[n]=n;

return ;	
}

int find(int x)
{
    if(par[x]!=x)
     par[x] = find(par[x]);
    return par[x];
}
 
int main()
{
	string input;
	char check;
    int test,node;
    scanf("%d",&test);
    bool flag=false;
    while(test--)
    {
        scanf("%d",&node);
		 int x,y,success=0,unsuccess=0,u,v;
        getchar();
        while(1)
        {
        	getline(cin,input);
        	if(input=="")
        	break;
            sscanf(input.c_str(),"%c %d %d",&check,&x,&y);
            if(!visited[x])
            {
            	makeset(x);
            	visited[x]=true;
            }
            if(!visited[y])
            {
            	makeset(y);
            	visited[y]=true;
            }
            if(check=='c')
			{
			 u = find(x);
             v = find(y);
            
            if(u!=v) 
			{
				par[v] = par[u];
				v=find(y);
			}
                	
			}   
			else 
			{
				 v=find(x);
				v=find(y);
				if(par[x]==par[y])	
					success++;
				
				else
					unsuccess++;
			
			}     
           
        }
        if(flag==true)
        printf("\n");
         printf("%d,%d\n",success,unsuccess);
         visited.clear();
         par.clear();
         flag=true;
    }
    return 0;
}
