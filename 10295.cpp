#include<bits/stdc++.h>
using namespace std;

map<string,int> arra;
int main()
{
	bool flag;
	stringstream sso;
	string Index,input,temp;
	long long value,sum;
	int n,m;
	while(cin>>m>>n)
	{
		getchar();
		for(int i=0;i<m;i++)
		{
			cin>>Index>>value;
			
			arra[Index]=value;
		}
		getchar();
		
		for(int i=0;i<n;i++)
		{
			sum=0;
			flag=false;
			while(getline(cin,input))
			{
				sso<<input;
				
				while(sso>>temp)
				{
					if(temp==".") 
					{
						flag=true;
						break;
					}
					sum+=arra[temp];
				    	
				}
			     sso.clear();
			     if(flag==true) break;
				
			}
		
				cout<<sum<<endl;
		}
	}
	
	return 0;
}
