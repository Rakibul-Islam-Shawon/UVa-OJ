#include<bits/stdc++.h>
using namespace std;
map<string,int>vec;
vector<pair<string,int> >ans;

bool compare(const pair<string,int>&i, const pair<string,int>&j)
{
    return i.second < j.second;
}
bool compare1(const pair<string ,int>&i, const pair<string,int>&j)
{
    return i.first < j.first;
}
int main()
{
	pair<string,int>temp;
	int test,m,n,b,val,k;
	string name,need,recipe;
	cin>>test;
	
	while(test--)
	{
		getchar();
		getline(cin,name);
		
		cin>>m>>n>>b;
		
		for(int i=0;i<m;i++)
		{
		
		  cin>>need>>val;	
           vec[need]=val;
		}
		
		for(int j=0;j<n;j++)
		{
		getchar();
		getline(cin,recipe);
		cin>>k;
		int total=0;
		for(int i=0;i<k;i++)
		{
			cin>>need>>val;
			total+=vec[need]*val;
		
		}
		if(total<=b)
		{
			temp=make_pair(recipe,total);
			ans.push_back(temp);
			
		}	
		}
		transform(name.begin(), name.end(),name.begin(), ::toupper);
		cout<<name<<endl;
		if(ans.size()==0)
		printf("Too expensive!\n");
		else
		{
			sort(ans.begin(),ans.end(),compare);
			int check,pos=0,start=0;
			
		for(int i=0;i<ans.size(); )
		{
			
			check=ans[i].second;
		while(ans[i].second==check and i<ans.size())
		{
			pos++;
			i++;
		}
		sort(ans.begin()+start,ans.begin()+pos,compare1);

		start=i;
		
		}
	
		for(int i=0;i<ans.size();i++)
		cout<<ans[i].first<<endl;
		}
		printf("\n");
		ans.clear();
		vec.clear();	
	}
	return 0;
}
