#include<bits/stdc++.h>
using namespace std;

int main()
{
	int k,e,count=0,max,pos[22];
	string key[22];
	string ex[22],temp,modified[22];
	while(scanf("%d %d",&k,&e)==2)
	{
		getchar();
		
		for(int i=0;i<k;i++)
		getline(cin,key[i]);
		
		for(int i=0;i<e;i++)
		{
			getline(cin,ex[i]);
	    }
			
			for(int i=0;i<e;i++)
			{
				
				for(int j=0 ;j<ex[i].size(); )
				{
					
				while(isalpha(ex[i][j]) and j<ex[i].size())
				{
					temp+=ex[i][j];
					j++;
					
				}
				 transform(temp.begin(),temp.end(),temp.begin(),::tolower);
				 
				 if(temp!="")
				 {
				 	modified[i]+=temp;
				    modified[i]+=" ";
				 }
				    temp="";
				    j++;	
					
				}
				
			}
		int max=0;
		for(int i=0;i<e;i++)
		{
			count=0,;
			sso<<ex[i];
			while(sso>>temp)
			{
				for(int j=0;j<k;j++)
				{
					if(temp==key[j])
					count++;
				}
			}
			
			if(count>max)
			{
				max=count;
			
			}
		}
				
	}
	
	return 0;
}
