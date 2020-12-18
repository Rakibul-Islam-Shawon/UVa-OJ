#include<bits/stdc++.h>
using namespace std;
int ans[85];
bool flag[2010];
int cnt=1;
bool primes[2010];

void sieve(int n)
{
	memset(primes,0,2009);

primes[2] =true;
for(int i=3; i<=n; i+=2)
{
if(flag[i] == 0)
{
primes[i] =true;
if(i <= n/i)
{
for(int j=i*i; j<=n; j+=i*2) 
flag[j] = 1;
}
}
}

return ;
}


int search(string input)
{
	string res;
	int temp,max,token;
	memset(ans,0,sizeof(int)*78);
	char test[]="0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	
	for(int i=0;i<strlen(test);i++)
	{
		for(int j=0;j<input.size();j++)
		{
		    temp=(int)test[i]-'0';
			if(test[i]==input[j])
			{
			ans[temp]++;	
			}
		}
	}
	
	for(int i=0;i<strlen(test);i++)
	{
		temp=(int)test[i]-'0';
		token=ans[temp];
		if(primes[token]==true)
		{
			res+=test[i];
		}
	}
	sort(res.begin(),res.end());
	if(res.size()==0)
	printf("Case %d: empty\n",cnt++);
	else
	printf("Case %d: %s\n",cnt++,res.c_str());
	
	return 0;
}

int main()
{
	string input;
	
	sieve(2005);
	int test;
	
	cin>>test;
	
getchar();
while(test--)
{
	
	getline(cin,input);
	
	search(input);
	
}
return 0;
}
