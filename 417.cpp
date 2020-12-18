#include<bits/stdc++.h>
using namespace std;

int main()
{
	map<string,int>arra;
	int count=1;
	string temp,test;
	for(int i=97;i<=122;i++)
	{
		temp=(char)i;
		arra[temp]=count++;
	}	
	temp="";
	for(int i=97;i<=122;i++)
	{
		char t1=(char)i;
	for(int j=i+1;j<=122;j++)
	   {
	   	temp+=t1;
		temp+=(char)j;
		arra[temp]=count++;
		temp="";	
		}	
	}
	
	for(int i=97;i<=122;i++)
	{
		char t1=(char)i;
	for(int j=i+1;j<=122;j++)
	{
		char t2=(char)j;
		string t3;
		t3+=t1;
		t3+=t2;
		for(int k=j+1;k<=122;)
		{
		  temp+=t3;
		  temp+=(char)k;
		  arra[temp]=count++;
		  k++;
		  temp="";
		}
		
	}	
	}
	
	for(int i=97;i<=122;i++)
	{
		char t1=(char)i;
	for(int j=i+1;j<=122;j++)
	{
		char t2=(char)j;
		for(int k=j+1;k<=122;k++)
		{
			char t3=(char)k;
			string t4;
			t4+=t1;
			t4+=t2;
			t4+=t3;
			for(int p=k+1;p<=122; )
			{
			temp+=t4;
		   temp+=(char)p;
		  arra[temp]=count++;
		    p++;
		  temp="";	
			}
		  
		}
		
	}	
	}
	
	for(int i=97;i<=122;i++)
	{
		char t1=(char)i;
	for(int j=i+1;j<=122;j++)
	{
		char t2=(char)j;
		for(int k=j+1;k<=122;k++)
		{
			char t3=(char)k;
			for(int p=k+1;p<=122;p++)
			{
				char t4=(char)p;
			    string t5;
		     	t5+=t1;
			    t5+=t2;
			    t5+=t3;
			    t5+=t4;
				for(int t=p+1;t<=122; )
				{
					temp+=t5;
		            temp+=(char)t;
		            arra[temp]=count++;
		            t++;
		            temp="";	
				}
			
			}
		  
		}
		
	}	
	}
	
while(cin>>test)
{
	
	cout<<arra[test]<<endl;
	
}
	return 0;
}
