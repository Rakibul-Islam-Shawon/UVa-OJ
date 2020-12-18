#include<bits/stdc++.h>
using namespace std;

int main()
{
	int x,y,sx,sy,row,col,m,n,L;
	pair<int,int>src,child,dest;
	int cnt[205][205]={0};
	while(cin>>row>>col)
	{
		
		if(row==0 and col==0)
		return 0;
		
		bool danger[201][201];
		
        for(int i=1;i<=row;i++)
       for(int j=1;j<=col;j++)
        {
            danger[i][j]=false;
            cnt[i][j]=0;
        }
		cin>>m;
		
		for(int i=0;i<m;i++)
		{
			
			cin>>x>>y;
			
			danger[x][y]=true;
			
		}
		
		cin>>n;
		
		for(int i=0;i<n;i++)
		{
			
			cin>>sx>>sy>>L;
	
			   for(int i=1;i<=row;i++)
			   {
			   	for(int j=1;j<=col;j++)
			   	{
			   	   int eqn=((sx-i)*(sx-i))+((sy-j)*(sy-j));	
			   		if(eqn<=(L*L))
			   		{
			   			danger[i][j]=true;
			   		}
			   	}
			   }
			
		}
    
		queue<pair<int,int> > q;
        
        src=make_pair(1,1);
        q.push(src);
        cnt[1][1]=0;
        danger[1][1]=true;
        
        dest=make_pair(row,col);
        
        while(!q.empty())
        {
            src=q.front();
            q.pop();
             sx=src.first,sy=src.second;
            for(int i=0;i<4;i++)
            {
                x=sx;
                y=sy;
                if(i==0) x--;
                if(i==1) y++;
                if(i==2) x++;
                if(i==3) y--;
                if((x>0 && x<=row && y>0 && y<=col))
                {
                    child.first=x;child.second=y;
                    if(!danger[x][y])
                    {
                        cnt[x][y]=cnt[sx][sy]+1;
                        q.push(child);
                        danger[x][y]=true;
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
        
        if(row ==1 and col==1)
        printf("0\n");
        else if(cnt[row][col]!=0)
        cout<<cnt[row][col]<<endl;
        else
        printf("Impossible.\n");
        
        memset(cnt,0,sizeof(cnt));
	}
	return 0;
}
