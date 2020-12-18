#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

int main()
{
	string str,*ptr;
	int G,n,i;
	while(scanf("%d",&G)!=0)
	{
		
		if(G==0)
		return 0;
	
		cin>>str;
		n=str.size();
	    G=n/G;
		for(i=0;i<n;i+=G)
		{
		reverse(str.begin()+i,str.begin()+(i+G));	
		for(int j=i;j<i+G;j++)
		cout<<str[j];
		}
		printf("\n");  
	}
	

	return 0;
}
