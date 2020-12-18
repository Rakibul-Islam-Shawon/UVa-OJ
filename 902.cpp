#include<bits/stdc++.h>
using namespace std;

const int MAX = 1000000+5;
int f[MAX];
int kmp(string str,string pat)
{
    str = pat + "#" + str;
    int pt = 0, cnt = 0;
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
		if(f[i] == pat.size())
		cnt++; 
                   	
    return cnt;
}

int main()
{
	int n;
	string str,key,ans,temp;
	stringstream sso;
	
	while(cin>>n>>str)
	{
		
	  int max=0;
	  
	  for(int j=0;j<=str.size()-n;j++)
	  {
	  	
	  	key=str.substr(j,n);
	  	int cnt;
	  	
	  	cnt=kmp(str,key);
	  	
	  	if(cnt>max)
	  	{
	  		max=cnt;
	  		ans=key;
	  	}
	  }
	  cout<<ans<<endl;
	  
	}
	return 0;
}
