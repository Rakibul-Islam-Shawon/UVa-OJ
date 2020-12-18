#include<bits/stdc++.h>
using namespace std;

bool compare(const pair<int ,int>&i, const pair<int,int>&j)
{
    return i.second < j.second;
}

bool compare1(const pair<int ,int>&i, const pair<int ,int>&j)
{
    return j.first < i.first;
}

int main()
{
	
	string input;
     int arra[200],k,index;
     vector<pair<int,int> >ans(200);
     bool flag=false;
	while(getline(cin,input))
	{
	
	memset(arra,0,sizeof(arra));
		
		for(int i=0;i<input.size();i++)
		{
			index=(int)input[i];
			arra[index]++;
			
		}
		k=0;
		for(int i=32;i<=127;i++)
		{
			if(arra[i]!=0)
			{
				
				ans[k].first=i;
				ans[k].second=arra[i];
				k++;
			}
		}
	
		sort(ans.begin(),ans.begin()+k,compare);
			
	int check,pos=0,start=0;
			
		for(int i=0;i<k; )
		{
			
			check=ans[i].second;
		while(ans[i].second==check and i<k )
		{
			pos++;
			i++;
		}
		sort(ans.begin()+start,ans.begin()+pos,compare1);

		start=i;
		
		}
		
		if(flag)
		printf("\n");
		for(int i=0;i<k;i++)
		cout<<ans[i].first<<" "<<ans[i].second<<endl;
		
	
	flag=true;
		ans.clear();
	}
	
	return 0;
}
