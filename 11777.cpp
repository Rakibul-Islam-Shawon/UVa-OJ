#include<bits/stdc++.h>
using namespace std;

int main()
{
	
	
	int test,t1,t2,final,present,ct[4],cnt=1;
	float ans;
	
	cin>>test;
	
	while(test--)
	{
		
		scanf("%d %d %d %d %d %d %d",&t1,&t2,&final,&present,&ct[0],&ct[1],&ct[2]);
		
		sort(ct,ct+3);
		
		ans=t1+t2+final+present+((ct[1]+ct[2])/2.0);
		
		if(ans>=90)
		printf("Case %d: A\n",cnt++);
		else if(ans>=80 and ans<90)
		printf("Case %d: B\n",cnt++);
		else if(ans>=70 and ans<80)
		printf("Case %d: C\n",cnt++);
		else if(ans>=60 and ans<70)
		printf("Case %d: D\n",cnt++);
		else
		printf("Case %d: F\n",cnt++);
	}
	return 0;
}
