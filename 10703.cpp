#include<bits/stdc++.h>


using namespace std;

int main()
{
	int w,h,n,x1,x2,y1,y2,result;
	bool arra[504][504]={false};
	
	while(scanf("%d %d %d",&w,&h,&n)==3)
	{
		result=0;
		if(w==0 and h==0 and n==0)
		return 0;
		
		for(int i=1;i<=n;i++)
	{
		scanf("%d %d %d %d",&x1,&y1,&x2,&y2);
		
		if(x1>x2)
		swap(x1,x2);
		if(y1>y2)
		swap(y1,y2);
		
		for(int j=x1;j<=x2;j++)
		for(int k=y1;k<=y2;k++)
		arra[j][k]=true;
		
	}
	
	for(int i=1;i<=w;i++)
	for(int j=1;j<=h;j++)
	if(arra[i][j]==false)
	result++;
	
	if(result==0)
	printf("There is no empty spots.\n");
	else if(result==1)
	printf("There is one empty spot.\n");
	else
	printf("There are %d empty spots.\n",result);
	
	memset(arra,0,253009);
	}
	
	
	
}
