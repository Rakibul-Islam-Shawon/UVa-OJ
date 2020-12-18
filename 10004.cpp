#include<bits/stdc++.h>
using namespace std;

int main()
{
	int node,edge,x,y;
	
	while(1)
	{
		cin>>node;
		if(node==0) return 0;
		cin>>edge;
		
		for(int i=0;i<edge;i++)
		{
			cin>>x>>y;
		}
		if(edge>=node)
		printf("NOT BICOLORABLE.\n");
		else
		printf("BICOLORABLE.\n");
	}
	return 0;
}
