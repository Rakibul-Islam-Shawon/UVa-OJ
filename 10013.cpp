#include<bits/stdc++.h>
using namespace std;
vector<pair<string,string> >vec(1000000);

int main()
{
	bool flag=false;
	int test,n,temp,remainder,div;
	string a,b,ans;
	cin>>test;
	
	while(test--)
	{
		cin>>n;
		ans="";
		div=0;
		for(int i=0;i<n;i++)
		{
			cin>>a>>b;
			vec[i].first=a;
			vec[i].second=b;
		  	
		}
		
		for(int i=n-1;i>=0;i--)
		{
			
		     int temp=atoi(vec[i].first.c_str())+atoi(vec[i].second.c_str());
		    
			    temp+=div;
				remainder=temp%10;
				div=temp/10;
               ans+=(remainder+48);
			  
		}
		if(div>0)
		ans+=(div+48);
		
		if(flag==true)
		printf("\n");
		reverse(ans.begin(),ans.end());
		cout<<ans<<endl;
			
		flag=true;
	}
	
	return 0;
}
