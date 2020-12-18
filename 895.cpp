#include<bits/stdc++.h>
using namespace std;
int ans[200],ans1[200];
int search(string input)
{
	int temp;
	memset(ans,0,sizeof(int)*200);
	char test[]="abcdefghijklmnopqrstuvwxyz";
	
	for(int i=0;i<strlen(test);i++)
	{
		for(int j=0;j<input.size();j++)
		{
			temp=(int)test[i];
			if(test[i]==input[j])
			{
			ans[temp]++;	
			}
		}
	}
	return 0;
}
int search1(string input)
{
	int temp;
	memset(ans1,0,sizeof(int)*200);
	char test[]="abcdefghijklmnopqrstuvwxyz";
	
	for(int i=0;i<strlen(test);i++)
	{
		for(int j=0;j<input.size();j++)
		{
			temp=(int)test[i];
			if(test[i]==input[j])
			{
			ans1[temp]++;	
			}
		}
	}
	return 0;
}
int main()
{
	int res[1000+5],temp1;
	bool flag;
	stringstream sso;
	string dic[1002],input[1002],temp,now[1002];
	int i=0;
	while(getline(cin,temp))
	{
		if(temp=="#")
		break;
		dic[i++]=temp;
		
	}
	for(int j=0;j<i;j++)
	sort(dic[j].begin(),dic[j].end());
	
	int j=0;
	while(getline(cin,temp))
	{
		if(temp=="#")
		break;
		input[j++]=temp;
		
	}

for(int p=0;p<j;p++)
{
	search(input[p]);
	int count=0;
	for(int k=0;k<i;k++)
	{
		flag=true;
		search1(dic[k]);
		for(int pos=0;pos<dic[k].size();pos++)
		{
			temp1=(int)dic[k][pos];
			if(!(ans[temp1] >= ans1[temp1]))
			{
				flag=false;
				break;
			}	
		}
		if(flag==true)
		count++;
	}
	res[p]=count;
}

for(int k=0;k<j;k++)
cout<<res[k]<<endl;


	return 0;
}
