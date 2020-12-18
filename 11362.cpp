#include<bits/stdc++.h>

using namespace std;

const int MAX = 1000000+5;
int f[MAX];
int kmp(string str,string pat)
{
    str = pat + "#" + str;
    int pt = 0, ret = 0;
    f[0] = 0;
    for(int i=1; i<str.size(); )
	{
        if(str[i] == str[pt])
		{
            f[i++] = ++pt;
        }
        else if(pt > 0)
		{
            pt = f[pt - 1];
        }
        else
		{
            f[i++] = 0;
        }
    }
    for(int i=0; i<str.size(); i++)
		if(f[i]==pat.size())
		ret++;
	
    return ret;
}

int main()
{
	string pat[10000+5];
	int test,n,ret;
	bool flag;
	cin>>test;
	
	while(test--)
	{
		cin>>n;
		flag=false;
		
		for(int i=0;i<n;i++)
		{
			cin>>pat[i];
	
		}
		sort(pat,pat+n);
		
			for(int i=0;i<n-1;i++)
			{
				ret=kmp(pat[i+1],pat[i]);
				
				if(ret>=1)
				{
					flag=true;
					break;
				}
				
			}
		if(flag==true)
		printf("NO\n");
		else
		printf("YES\n");
		
	}
	
	return 0;
}
