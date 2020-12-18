#include<stdio.h>
#include<iostream>
#define  sf scanf
#define pf  printf 
using namespace std;

int main()
{
	
	int k,n,m,x,y;
	
	while(sf("%d",&k)!=0)
	{
		if(k==0)
		break;
		sf("%d %d\n",&n,&m);
	
	for(int i=0;i<k;i++)
	{
		sf("%d %d",&x,&y);
			if(x>n&&y>m)
	pf("NE\n");
	else if(x>n&&y<m)
	pf("SE\n");
	else if(x<n&&y>m)
	pf("NO\n");	
	else if(x<n&&y<m)
	pf("SO\n");
    else if(x==n||y==m)
    pf("divisa\n");
	
	}
	
	}	

return 0;
	
}
