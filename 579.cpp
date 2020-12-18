#include<stdio.h>
#include<math.h>

int main()
{
	float H,M;
	float angle;
	while(scanf("%f:%f",&H,&M)==2)
	{
		
		if(H==0&&M==0)
		return 0;
		
		
		angle=(60*H-11*M)/2;		
		if(angle<0)
		angle=angle*(-1);
		if(angle>=180)
		angle=360-angle;
		printf("%0.3f\n",angle);	
		
	}

	return 0;
}
