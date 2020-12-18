#include<bits/stdc++.h>

int find_step(int limit,int x,int y)
{
	int step=1;
	x=x+1;
	while(x<limit)
	{
		step+=x;
		step+=1;
		x++;
	}
	
	step+=(limit-y);
	
	return step;
}
int main()
{
	
	int x1,y1,x2,y2,test,temp1,temp,ans,ans1,i;
	int count=1;
	scanf("%d",&test);
	
	while(test--)
	{
		ans=0,ans1=0;
		scanf("%d %d %d %d",&x1,&y1,&x2,&y2);
		
		temp=(x2*(x2+1)/2);
		temp+=x2;
		if(y2!=0)
		ans=find_step(x2+y2,x2,y2);
		ans+=temp;
		if(x1!=0||y1!=0)
		{
		temp1=(x1*(x1+1)/2);
		temp1+=x1;
		if(y1!=0)
		{
		ans1=find_step(x1+y1,x1,y1);
		ans1+=temp1;
		ans-=ans1;
		}
		else
		ans-=temp1;	
		}	
		printf("Case %d: %d\n",count++,ans);
		
	}
	
	return 0;
}
