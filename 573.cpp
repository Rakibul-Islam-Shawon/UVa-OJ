#include<stdio.h>
#include<math.h>
#include<iostream>
using namespace std;
int main()
{
	int  H,U,D,F,DAY;
	int i;
	while(scanf("%d %d %d %d",&H,&U,&D,&F)==4)
	
	{
		if(H==0)
		return 0;
		float ans=0,f,U1;
		f=U*(float)F/100;
		U1=U;
		
		for( i=1; ;i++)
		{
			if(ans+U1>H)
             {
             	ans=ans+U1;
             		break;
             }
		
			ans=ans+U1-D;
			U1=U1-f;
			if(ans<0)
			break;
			else if(U1<=0)
			U1=0;
			
		}
		
		if(ans>H)
		cout<<"success on day "<<i<<endl;
		else
		cout<<"failure on day "<<i<<endl;
	}
	
	return 0;
}
