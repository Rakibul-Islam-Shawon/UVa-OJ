#include<iostream>
#include<vector>
#include<cstdio>
#include<string>
#include<algorithm>
#include<cmath>

using namespace std;
int main()
{
	int input,index,index1,index2;
	long long ans;
	vector<int>temp;
	
	while(scanf("%d",&input)!=EOF)
	{
		
		temp.push_back(input);
		sort(temp.begin(),temp.end());
		if(temp.size()%2==0)
		{
			
			index1=temp.size()/2-1;
			index2=index1+1;
			ans=temp[index1]+temp[index2];
			ans/=2LL;
			cout<<ans<<endl;
		}
		else
		{
			index=ceil(temp.size()/2);
			cout<<temp[index]<<endl;
		}
		
	}
	
	return 0;
}
