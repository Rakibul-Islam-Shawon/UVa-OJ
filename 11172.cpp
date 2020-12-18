#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
	int x[18],y[18],t;
	cin>>t;
	
	for(int i=0;i<t;i++)
	{
		scanf("%d %d",&x[i],&y[i]);
		
	}
	
	for(int i=0;i<t;i++)
	{
		if(x[i]>y[i])
		cout<<">"<<endl;
		else if(x[i]<y[i])
		cout<<"<"<<endl;
		else
		cout<<"="<<endl;
	}
	
	return 0;
}
