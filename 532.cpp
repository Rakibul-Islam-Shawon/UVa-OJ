#include<bits/stdc++.h>

using namespace std;

struct var{
	
	int x;
	int y;
	int z;
};
int main()
{
	struct var v,src,dest,child;
	int l,r,c,sx,sy,sz,dx,dy,dz,x,y,z;
	int cnt[32][32][32];
	char a;
	bool block[32][32][32];
	while(1)
	{
		cin>>l>>r>>c;
		if(l==0 and r==0 and c==0)
		return 0;
		
		for(int i=0;i<l;i++)
		{
			getchar();
		for(int j=0;j<r;j++)
		{
			for(int k=0;k<c;k++)
		{
			scanf("%c",&a);
			if(a=='#')
			block[i][j][k]=true;
			else if(a=='S')
			{
				sx=i;
				sy=j;
				sz=k;
			}
			else if(a=='E')
			{
				dx=i;
				dy=j;
				dz=k;
			}
			else
			block[i][j][k]=false;
			
			cnt[i][j][k]=0;
		}
	
	    getchar();
		}
		
		}

		queue<struct var>q;
		
		v.x=sx;
		v.y=sy;
		v.z=sz;
		
		q.push(v);
		
		block[sx][sy][sz]=true;
		
		dest.x=dx;
		dest.y=dy;
		dest.z=dz;
		cnt[dest.x][dest.y][dest.z]= -1;
		while(!q.empty())
        {
            src=q.front();
            q.pop();
            int tx=src.x,ty=src.y,tz=src.z;
            
            for(int i=0;i<6;i++)
            {
                x=tx;
                y=ty;
                z=tz;
                
                if(i==0) y--;
                if(i==1) z++;
                if(i==2) y++;
                if(i==3) z--;
                if(i==4) x++;
                if(i==5) x--;
                if((x>=0 && x<l && y>=0 && y<r && z>=0 && z<c))
                {
                    child.x=x;child.y=y,child.z=z;
                    if(!block[x][y][z])
                    {
                        cnt[x][y][z]=cnt[tx][ty][tz]+1;
                        q.push(child);
                        block[x][y][z]=true;
                        if(child.x==dest.x and child.y==dest.y and child.z==dest.z)
                        {
                            while(!q.empty())
                            q.pop();
                            break;
                        }
                    }
                }
            }
        }
        if(cnt[dest.x][dest.y][dest.z]==-1)
        printf("Trapped!\n");
        else
        printf("Escaped in %d minute(s).\n",cnt[dest.x][dest.y][dest.z]);
        
        memset(block,0,(32*32*32));
	}
	

}
