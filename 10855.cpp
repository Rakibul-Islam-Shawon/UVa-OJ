#include<cstdio>
#include<iostream>
#include<string>

using namespace std;
int n,N;
string big[202],small[202],a[202],b[202],c[202];
bool check(int pos1,int pos2);
void rot90(int n)
{
	char keep;
	for(int i=0;i<n;i++)
	{
		a[i]="";
		for(int j=n-1;j>=0;j--)
		{
			keep=small[j][i];
			a[i].push_back(keep);
		}
		
	}	
	for(int i=0;i<n;i++)
	small[i]=a[i];
	
	return ;
}
int normal(void)
{
	int count=0,i,j,k;
	bool mark;
	for(i=0;i<N-n+1;i++)
{
	for(j=0;j<N-n+1;j++)
	{
		for(k=0;k<n;k++)
		{
			if(small[0][k]!=big[i][j+k])
		     break;
		}
		
		if(k==n)
		{
			mark=check(i,j);
			if(mark==false)
		     count++;
		}
		
		
	}
}

return count;
}

bool check(int pos1,int pos2)
{
	int k,j,a=1;
	bool flag=false;
	for(int i=pos1+1;i<n+pos1;i++)
	{
		j=pos2;
			for(k=0;k<n;k++)
			{
			if(small[a][k]!=big[i][j+k])
			{
				flag=true;
				break;
			}
				
			}
			if(flag==true)
			break;
			a++;	
	}
	
	return flag;
}
int main()
{
	int i,j,m,o,p,ans;
	while(scanf("%d %d",&N,&n)==2)
	{
		if(N==0 and n==0)
		return 0;
		getchar();
		for(int i=0;i<N;i++)
		 getline(cin,big[i]);
		 for(int j=0;j<n;j++)
		 getline(cin,small[j]);
		 
		 ans=normal();
		 printf("%d",ans);
		 rot90(n);
		 ans=normal();
		 printf(" %d",ans);
		 rot90(n);
		 ans=normal();
		 printf(" %d",ans);
		 rot90(n);
		 ans=normal();
		 printf(" %d\n",ans);
		

	}
	
	
}
