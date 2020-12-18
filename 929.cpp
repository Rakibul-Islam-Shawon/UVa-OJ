#include<bits/stdc++.h>
using namespace std;

int cost[1000][1000];

struct node
{
    pair<int,int>u;int w;
    node(pair<int,int> a,int b){u=a; w=b;}
    
    bool operator < (const node& p) const 
	{
    return p.w < w;
    }

};
int d[1000][1000];
int cnt=1;
int dijkstra(int R,int C)
{
	int x,y;
	pair<int,int>src,dest;
	src.first=0;
	src.second=0;
	dest.first=R;
	dest.second=C;
    memset(d,100,sizeof(d)); 
    priority_queue<node, vector<node> > q;
    q.push(node(src,cost[0][0]));
    d[src.first][src.second]=cost[0][0];
    while(!q.empty())
    {
    	pair<int,int> u,v;
        node top=q.top(); 
		q.pop();
        u=top.u;
        int sx=u.first,sy=u.second;
        
        if(u==dest) return d[dest.first][dest.second];
        
        for(int i=0;i<4;i++)
        {
        	    x=sx;
                y=sy;
                if(i==0) x--;
                if(i==1) y++;
                if(i==2) x++;
                if(i==3) y--;
            v=make_pair(x,y);
            if((x>=0 && x<=R && y>=0 && y<=C))
                {
                     if(d[sx][sy]+cost[x][y] < d[x][y])
                     {
                      d[v.first][v.second]=d[sx][sy]+cost[x][y];
                      q.push(node(v,d[v.first][v.second]));
                     }
                }
           
        }
    }
    return -1;
}
int main()
{
    int row,colum,src,dest,test,ret,w;
    cin>>test;
    while(test--)
    {
    	cin>>row>>colum;
    	
    for(int i=0;i<row;i++)
    {
    	for(int j=0;j<colum;j++)
    	{
    		cin>>w;
        cost[i][j]=w;
    	
    	}
        
    }
	ret=dijkstra(row-1,colum-1);
	printf("%d\n",ret);
		
		memset(cost,0,sizeof(cost));
    }
    
    return 0;
}
