#include<bits/stdc++.h>
using namespace std;

const int MAX = 1000000+5;
int f[MAX],ret;
int kmp(string str,string pat)
{
	ret=0;
    str = pat + "#" + str;
    int pt = 0,temp;
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
		{
		   temp=i-pat.size();
			ret++;
		}
		                   
	 
	
    return temp;
}

int main()
{
	
	bool flag=false;
	string str,pat,ff;
	int test,temp,i;
    cin>>test;
	while(test--)
	{
		
		cin>>str;
		
		if (flag) 
		cout << endl; 
		flag = 1;
	
		for(i=1;i<=str.size();i++)
		{
			pat=str.substr(0,i);
			temp=kmp(str,pat);
			if((ret*pat.size())==str.size() and temp==str.size())
			{
			    cout<<pat.size()<<endl;	
			    break;
			}
					
		}
	
	}
	return 0;
	
}
