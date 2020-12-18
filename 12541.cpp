#include<bits/stdc++.h>
using namespace std;
	
struct student{
	
	char name[20];
	int day;
	int month;
	int year;
}arra[101];



void step1(int n)
{
	struct student swap;
	
	for(int i=0;i<n-1;i++)
	{
		for(int j=0;j<n-i-1;j++)
		{
			if(arra[j].year>arra[j+1].year)
			{
			
			swap=arra[j+1];
			arra[j+1]=arra[j];
			arra[j]=swap;
		}
		}
	}
	
	return ;
}

void step2(int n)
{
	struct student swap;
	
	for(int i=0;i<n-1;i++)
	{
		for(int j=0;j<n-i-1;j++)
		{
			if(arra[j].year ==arra[j+1].year and arra[j].month>arra[j+1].month)
			{
			
			swap=arra[j+1];
			arra[j+1]=arra[j];
			arra[j]=swap;
		}
		}
	}
	
	return ;
}

void step3(int n)
{
	struct student swap;
	
	for(int i=0;i<n-1;i++)
	{
		for(int j=0;j<n-i-1;j++)
		{
			if(arra[j].month == arra[j+1].month and arra[j].day>arra[j+1].day)
			{
			
			swap=arra[j+1];
			arra[j+1]=arra[j];
			arra[j]=swap;
		}
		}
	}
	
	return ;
}

int main()
{

	int n;
	
	cin>>n;
	
	for(int i=0;i<n;i++)
	scanf("%s %d %d %d",&arra[i].name,&arra[i].day,&arra[i].month,&arra[i].year);
	
	
	step1(n);
	step2(n);
	step3(n);
	
	printf("%s\n",arra[n-1].name);
	printf("%s\n",arra[0].name);
	
	return 0;
}
