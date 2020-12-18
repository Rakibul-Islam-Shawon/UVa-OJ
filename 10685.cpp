#include<bits/stdc++.h>
using namespace std;

map<string,string>par;
map<string,int>ans;
void makeset(string n)
{
par[n]=n;

return ;	
}

string find(string r)
{
	if(par[r]!=r)
	par[r]=find(par[r]);
	
	return par[r];
}

void uni(string a,string b)
	{
		string u,v;
	  u=find(a);
	  v=find(b);
	  
	    if (u!=v) 
		par[u]=v;
	     
		return ;	
	}
	

int main()
{
	int C,R;
	string x,y;
	string arra[5000+5];
	while(cin>>C>>R)
	{
		if(C==0 and R==0)
		return 0;
		getchar();
		for(int i=0;i<C;i++)
		{
			cin>>arra[i];
			makeset(arra[i]);
		}
		for(int i=0;i<R;i++)
		{
			
			cin>>x>>y;
			uni(x,y);
			
		}
		int max=0;
		for(int i=0;i<C;i++)
		{
			string temp=find(arra[i]);
			ans[temp]++;
			if(ans[temp]>max)
			{
				max=ans[temp];
				
			}
		}
		cout<<max<<endl;
		par.clear();
		ans.clear();
	}
}
