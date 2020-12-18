#include<stdio.h>
#include<math.h>
#define  PI 3.1415926535897932

int main()
{
	int T;
	double L,area1,area2,r;
	scanf("%d",&T);
	while(T--)
{
	scanf("%lf",&L);
	
area1=PI*pow(L/5,2);
	
area2=pow(L,2)*0.6-area1;
	
	printf("%0.2lf %0.2lf\n",area1,area2);
	
}
	
	return 0;
	
}
