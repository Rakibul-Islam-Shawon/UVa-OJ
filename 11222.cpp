#include<bits/stdc++.h>

using namespace std;

int main()
{
int test,problem1,problem2,problem3,n,len1,len2,len3,count=1;
int  one[10001],two[10001],three[10001];
int ans1[10001],ans2[10001],ans3[10001],len;
bool bone[10001]={false},btwo[10001]={false},bthree[10001]={false};
scanf("%d",&test);

while(test--)
{
printf("Case #%d:\n",count++);
scanf("%d",&problem1);
for(int i=0;i<problem1;i++)
{
	scanf(" %d",&one[i]);
	bone[one[i]]=true;
}

scanf("%d",&problem2);
for(int i=0;i<problem2;i++)
{
scanf(" %d",&two[i]);
btwo[two[i]]=true;	
}

scanf("%d",&problem3);
for(int i=0;i<problem3;i++)
{
	scanf(" %d",&three[i]);
	bthree[three[i]]=true;
}
n=0;
for(int i=0;i<problem1;i++)	
{
	if(btwo[one[i]]==false and bthree[one[i]]==false)
	ans1[n++]=one[i];
	
}
len1=n;
if(n>=1)
sort(ans1,ans1+n);
n=0;
for(int i=0;i<problem2;i++)	
{
	if(bone[two[i]]==false and bthree[two[i]]==false)
	ans2[n++]=two[i];
}
len2=n;
if(n>=1)
sort(ans2,ans2+n);
n=0;
for(int i=0;i<problem3;i++)	
{
	if(bone[three[i]]==false and btwo[three[i]]==false)
	ans3[n++]=three[i];
}
len3=n;
if(n>=1)
sort(ans3,ans3+n);

if(len1>=len2 and len1>=len3)
{
	cout<<1<<" "<<len1;
	for(int i=0;i<len1;i++)
	cout<<" "<<ans1[i];
	cout<<endl;
	if(len1==len2)
	{
		cout<<2<<" "<<len2;
	for(int i=0;i<len2;i++)
	cout<<" "<<ans2[i];
	cout<<endl;
	}
	if(len1==len3)
	{
		cout<<3<<" "<<len3;
	for(int i=0;i<len3;i++)
	cout<<" "<<ans3[i];
	cout<<endl;
	}
	
	
}
else if(len2>=len1 and len2>=len3)
{
	
	
if(len2==len1)
	{
		cout<<1<<" "<<len1;
	for(int i=0;i<len1;i++)
	cout<<" "<<ans1[i];
	cout<<endl;
		
	}
	cout<<2<<" "<<len2;
	for(int i=0;i<len2;i++)
	cout<<" "<<ans2[i];
	cout<<endl;
	
	if(len2==len3)
	{
		cout<<3<<" "<<len3;
	for(int i=0;i<len3;i++)
	cout<<" "<<ans3[i];
	cout<<endl;
	}	
}
else if(len3>=len1 and len3>=len2)
{
if(len3==len1)
	{
		cout<<1<<" "<<len1;
	for(int i=0;i<len1;i++)
	cout<<" "<<ans1[i];
	cout<<endl;
	}
	if(len3==len2)
	{
		cout<<2<<" "<<len2;
	for(int i=0;i<len2;i++)
	cout<<" "<<ans2[i];
	cout<<endl;
	}
	cout<<3<<" "<<len3;
	for(int i=0;i<len3;i++)
	cout<<" "<<ans3[i];
	cout<<endl;
		
}
memset(bone,0,10001);
memset(btwo,0,10001);
memset(bthree,0,10001);

}	
		
	return 0;
}
