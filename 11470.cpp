#include<bits/stdc++.h>
using namespace std;

bool color[15][15];
int grid[15][15];
vector<int>vec;
int p=1;
int main()
{
	char input;
	int test,left,right,row,sum,col;
	
	
	while(scanf("%d",&row)==1)
	{
	    if(row==0) return 0;
	    
		  col=row;
		for(int i=0;i<row;i++)
		for(int j=0;j<col;j++)
		{
			
			cin>>grid[i][j];
			
		}
		left=0;
		right=row-1;
		
	while(left <= right)
    {
    	sum=0;
        for(int x=0; x<row; x++)
        {
            for(int y=0; y<col; y++)
            {
                if( (x == left || y == left || x == right || y == right) and color[x][y] == 0)
                {
                    sum += grid[x][y];
                    color[x][y] = 1;
                }
            }
        }
        vec.push_back(sum);
        
        left++;
        right--;
    }
        printf("Case %d:",p++);
   	    for(int i=0;i<vec.size();i++) cout<<" "<<vec[i];
   	    printf("\n");
   	    memset(color,0,sizeof(color));
   	    vec.clear();
	}
   	
	return 0;
}
