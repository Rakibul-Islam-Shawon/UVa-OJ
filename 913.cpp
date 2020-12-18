#include<bits/stdc++.h>
using namespace std;

int main()
{
	
	long long n,prefix,total,level,a,b,c;
	
	while(cin>>n)
	{
		level=n/2+1;
		
		prefix=(level-1)*(level-1) + n;
		
		total=prefix*prefix;
		
		prefix-=1;
		prefix*=prefix;
		
		total=total-prefix;
		a=total;
		b=a-2;
		c=b-2;
		total=a+b+c;
		cout<<total<<endl;
	}
	return 0;
}
