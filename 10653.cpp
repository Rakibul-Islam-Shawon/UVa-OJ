
#include<bits/stdc++.h>
using namespace std;
int R,C,M,row,rcount,col,x,y;
pair<int,int> src,child,dest;
int cnt[1001][1001];
int main()
{

    while(cin>>R>>C)
    {
        bool bomb[1001][1001];
        for(int i=0;i<(1001);i++)
       for(int j=0;j<(1001);j++)
        {
            bomb[i][j]=false;
            cnt[i][j]=0;
        }
        if(!R && !C) break;
        cin>>M;
        for(int i=0;i<(M);i++)
        {
            cin>>row;
            cin>>rcount;
            for(int j=0;j<(rcount);j++)
            {
                cin>>col;
                bomb[row][col]=true;
            }
        }
        queue<pair<int,int> > q;
        cin>>row>>col;
        src=make_pair(row,col);
        q.push(src);
        cnt[row][col]=0;
        bomb[row][col]=true;
        cin>>row>>col;
        dest=make_pair(row,col);
        while(!q.empty())
        {
            src=q.front();
            q.pop();
            int sx=src.first,sy=src.second;
            for(int i=0;i<4;i++)
            {
                x=sx;
                y=sy;
                if(i==0) x--;
                if(i==1) y++;
                if(i==2) x++;
                if(i==3) y--;
                if((x>=0 && x<R && y>=0 && y<C))
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
        cout<<cnt[dest.first][dest.second]<<endl;
    }
}
