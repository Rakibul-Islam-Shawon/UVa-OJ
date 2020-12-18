#include<bits/stdc++.h>
using namespace std;

const int MAX = 1000000+5;
int f[MAX];
int kmp(string str,string pat)
{
    str = pat + "#" + str;
    int pt = 0, ret = 0;
    f[0] = 0;
    for(int i=1; i<str.size(); ){
        if(str[i] == str[pt]){
            f[i++] = ++pt;
        }
        else if(pt > 0){
            pt = f[pt - 1];
        }
        else{
            f[i++] = 0;
        }
    }
    for(int i=0; i<str.size(); i++) ret += f[i] == pat.size();
    return ret;
}

int main()
{
	
	ios_base::sync_with_stdio(false);
	string str,pat;
	int test,qry,pos;
	cin>>test;
    
	while(test--)
	{
		
		cin>>str;
		cin>>qry;
		for(int i=0;i<qry;i++)
		{
			cin>>pat;

			pos=kmp(str,pat);
			
			if(pos==0)
			cout<<"n"<<endl;
			else
			cout<<"y"<<endl;
		}
		
		
	}
	return 0;
	
}
