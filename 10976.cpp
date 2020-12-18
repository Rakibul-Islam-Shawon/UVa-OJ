#include<bits/stdc++.h>

using namespace std;

bool AreDoubleSame(double dFirstVal, double dSecondVal)
{
    return fabs(dFirstVal - dSecondVal) < numeric_limits<double>::epsilon();
}

int main()
{
	
	int n,x,y,temp1,cnt;
	double nd,xd,yd,temp;
	int X[1000],Y[1000];
	
	while(scanf("%d",&n)==1)
	{
		y=n+1;
		x=n*y;
		nd=1/(double)n; 
		   cnt=0;
		while(1)
		{

			xd=1/(double)x;
			yd=1/(double)y;
		     
		     	double sum=(xd+yd);
		     	
		    if(AreDoubleSame(nd,sum))
			{
				
				X[cnt]=x;
				Y[cnt]=y;
				cnt++;
					
				if(x==y)
				break;
			}
			y++;
			
			temp=(double)(n*y)/(y-n);
			temp1=ceil(temp);
		
			if(temp==temp1)
			{
				x=temp;
			}
				
		 
		}
		
		
		printf("%d\n",cnt);
			
			for(int i=0;i<cnt;i++)
		 printf("1/%d = 1/%d + 1/%d\n",n,X[i],Y[i]);
	}
	
	
	return 0;
}
