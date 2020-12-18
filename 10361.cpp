#include<bits/stdc++.h>
using namespace std;

int main()
{
	int test;
	string line1,line2,ans1,ans2,s2,s3,s4,s5;
	cin>>test;
	getchar();
	
	while(test--)
	{
		getline(cin,line1);
		getline(cin,line2);
		
		for(int i=0;i<line1.size();i++)
		{
			if(line1[i]!='<' and line1[i]!='>')
			ans1+=line1[i];
		}
		
	
		int i=0;
			while(line1[i]!='<')
			{
				i++;
			}
			i++;
		while(line1[i]!='>')
			{
				s2+=line1[i];
				i++;
			}
			
			i++;
			while(line1[i]!='<')
			{
				s3+=line1[i];
				i++;
			}
			i++;
			
			while(line1[i]!='>')
			{
				s4+=line1[i];
				i++;
			}
			i++;
			
			while(i<line1.size())
			{
				s5+=line1[i];
				i++;
			}
	
			
		int j=0;
		while(line2[j]!='.')
		{
			ans2+=line2[j];
			j++;
		}
		ans2+=(s4+s3+s2+s5);	
		
		cout<<ans1<<endl;
		cout<<ans2<<endl;
		
		ans1="";
		ans2="";
		s2="";
		s3="";
		s4="";
		s5="";	
	}
	
	return 0;
}
