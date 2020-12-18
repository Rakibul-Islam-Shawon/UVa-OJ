#include<bits/stdc++.h>
using namespace std;

int main()
{
	
	queue<int>Q;
	int n,temp;
	
	while(cin>>n)
	{
		if(n==0)
		return 0;
		
		for(int i=1;i<=n;i++)
		{
			Q.push(i);
		}
		printf("Discarded cards:");
		    
		while(Q.size()!=1)
		{
			if(Q.size()==2)
			cout<<" "<<Q.front();
			else
			cout<<" "<<Q.front()<<",";
			Q.pop();
		    temp=Q.front();
			Q.pop();
			Q.push(temp);
	    }
	    printf("\n");
		printf("Remaining card: %d\n",Q.front());
		Q.pop();
	}
}
