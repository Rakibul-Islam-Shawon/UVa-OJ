#include<cstdio>
#include<iostream>
#include<vector>
#include<cstring>
#include<string>
#include<sstream>
using namespace std;
void combine(int n);
bool rot90(int n);
bool rot180(int n);
bool rot270(int n);
bool same(int n);
bool reflx(int n);
string mains[11],transd[11],ref[11];
string temp;
int count=1,check;
bool flag;
void combine(int n)
{
	
	for(int i=0;i<n;i++)
	{
		temp=mains[i];
	ref[n-i-1]=temp;	
	}
	
	return ;
}
bool rot90(int n)
{
	flag=false;
	char keep;
	if(check==1)
	{
		for(int i=0;i<n;i++)
	{
		temp="";
		for(int j=n-1;j>=0;j--)
		{
			keep=ref[j][i];
			temp.push_back(keep);
		}
		
		if(temp!=transd[i])
		{
			flag=true;
			break;
		}
	}
	}
	else
	{
	for(int i=0;i<n;i++)
	{
		temp="";
		for(int j=n-1;j>=0;j--)
		{
			keep=mains[j][i];
			temp.push_back(keep);
		}
		
		if(temp!=transd[i])
		{
			flag=true;
			break;
		}
	}	
	}
	
	if(flag==false and check==0)
	printf("Pattern %d was rotated 90 degrees.\n",count++);
	else if(flag==false and check==1)
	printf("Pattern %d was reflected vertically and rotated 90 degrees.\n",count++);
	return flag;
}
bool rot180(int n)
{
	flag=false;
	if(check==1)
	{
	for(int i=n-1;i>=0;i--)
	{
		temp="";
		for(int j=n-1;j>=0;j--)
		{
			temp.push_back(ref[i][j]);
		}
		
		if(temp!=transd[n-i-1])
		{
			flag=true;
			break;
		}
	}	
	}
	else
	{
		for(int i=n-1;i>=0;i--)
	{
		temp="";
		for(int j=n-1;j>=0;j--)
		{
			temp.push_back(mains[i][j]);
		}
		
		if(temp!=transd[n-i-1])
		{
			flag=true;
			break;
		}
	}
	}
	if(flag==false and check==0)
	printf("Pattern %d was rotated 180 degrees.\n",count++);
	else if(flag==false and check==1)
	printf("Pattern %d was reflected vertically and rotated 180 degrees.\n");
	return flag;
}

bool rot270(int n)
{
	flag=false;
	char keep;
	if(check==1)
	{
		for(int i=n-1;i>=0;i--)
	{
		temp="";
		for(int j=0;j<n;j++)
		{
			keep=ref[j][i];
			temp.push_back(keep);
		}
		
		if(temp!=transd[n-i-1])
		{
			flag=true;
			break;
		}
	}
	}
	else
	{
		for(int i=n-1;i>=0;i--)
	{
		temp="";
		for(int j=0;j<n;j++)
		{
			keep=mains[j][i];
			temp.push_back(keep);
		}
		
		if(temp!=transd[n-i-1])
		{
			flag=true;
			break;
		}
	}
	}
	if(flag==false and check==0)
	printf("Pattern %d was rotated 270 degrees.\n",count++);
	else if(flag==false and check==1)
	printf("Pattern %d was reflected vertically and rotated 270 degrees.\n",count++);
	return flag;
}
bool same(int n)
{
	flag=false;
	for(int i=0;i<n;i++)
	{
		if(mains[i]!=transd[i])
		{
			flag=true;
			break;
		}
	}
	if(flag==false)
	printf("Pattern %d was preserved.\n",count++);
	
	return flag;
}
bool reflx(int n)
{
	flag=false;
	for(int i=0;i<n;i++)
	{
		if(mains[i]!=transd[n-i-1])
		{
			flag=true;
			break;
		}
	}
	if(flag==false)
	printf("Pattern %d was reflected vertically.\n",count++);
	
	return flag;
}
int main()
{
	bool mark;
	
	int n;
	string a,b;
	
	while(scanf("%d",&n)==1)
	{
		check=0;
	
	for(int i=0;i<n;i++)
	{	
	cin>>a>>b;
	mains[i]=a;
	transd[i]=b;	
	}
	mark=same(n);
	if(mark==1)
	mark=rot90(n);
	if(mark==1)
	mark=rot180(n);
	if(mark==1)
	mark=rot270(n);
	if(mark==1)
	mark=reflx(n);
	if(mark==1)
	{
		check=1;
		combine(n);
		mark=rot90(n);
	if(mark==1)
	mark=rot180(n);
	if(mark==1)
	mark=rot270(n);
	if(mark==1)
	printf("Pattern %d was improperly transformed.\n",count++);
		
	}
	
	}
	
	return 0;
}
