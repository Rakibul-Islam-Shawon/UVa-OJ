#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
	int x,y,test_case;
	float ans1,ans2;
	cin>>test_case;
	while(test_case--)
	{
		
		scanf("%d %d",&x,&y);
		if(x<y)
		printf("impossible\n");
		else
		{
		ans1=(float)(x+y)/2;
		if((int)ans1!=ans1)
		printf("impossible\n");
		else
		{
			ans2=x-ans1;
       if(ans1>ans2)
       printf("%d %d\n",(int)ans1,(int)ans2);
       else
       printf("%d %d\n",(int)ans1,(int)ans2);
		}
		
		}
			
	}
	return 0;
}
