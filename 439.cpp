#include<bits/stdc++.h>
using namespace std;

map<char,int>Index;
int x,y;
pair<int,int> src,child,dest;
int cnt[101][101];
int main()
{
     char x1,x2;
     int y1,y2;
     bool bomb[10][10];
    while(cin>>x1>>y1>>x2>>y2)
    {
        for(int i=1;i<=8;i++)
       for(int j=1;j<=8;j++)
        {
            bomb[i][j]=false;
            cnt[i][j]=0;
        }
        int knt=1;
       for(int i=97;i<=97+7;i++)
        Index[i]=knt++;
       
        
        queue<pair<int,int> > q;
        
        src=make_pair(Index[x1],y1);
        q.push(src);
        cnt[src.first][src.second]=0;
        bomb[src.first][src.second]=true;
        
        dest=make_pair(Index[x2],y2);
        while(!q.empty())
        {
            src=q.front();
            q.pop();
            int sx=src.first,sy=src.second;
            for(int i=0;i<8;i++)
            {
                x=sx;
                y=sy;
                if(i==0) 
				{
				   x=x-2;
				   y=y-1;	
				}
                if(i==1) 
				{
				  x=x-1;
				  y=y-2;	
				}
                if(i==2) 
				{
					x=x-2;
					y=y+1;
				}
                if(i==3)
				{
					x=x-1;
					y=y+2;
				}
				if(i==4)
				{
					x=x+1;
					y=y+2;
				} 
				if(i==5)
				{
					x=x+2;
					y=y+1;
				}
				if(i==6)
				{
					x=x+2;
					y=y-1;
				}
				if(i==7)
				{
					x=x+1;
					y=y-2;
				}
				
                if((x>=1 && x<=8 && y>=1 && y<=8))
                {
                    child.first=x;child.second=y;
                    if(!bomb[x][y])
                    {
                        cnt[x][y]=cnt[sx][sy]+1;
                        q.push(child);
                        bomb[x][y]=true;
                        if(child==dest)
                        {
                            while(!q.empty())
                            q.pop();
                            break;
                        }
                    }
                }
            }
        }
       printf("To get from %c%d to %c%d takes %d knight moves.\n",x1,y1,x2,y2,cnt[dest.first][dest.second]);
    }
}
