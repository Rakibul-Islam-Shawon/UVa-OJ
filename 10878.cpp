#include<bits/stdc++.h>
using namespace std;

int btod(int n)
{
    int output = 0;

    for(int i=0; n > 0; i++) {

        if(n % 10 == 1) {
            output += (1 << i);
        }
        n /= 10;
    }

    return output;
}
int main()
{
	stringstream sso;
	string input;
	string temp;
	int i,var,ans,cnt=0;
	while(getline(cin,input))
	{	
	     if(cnt!=0 and input=="___________")
      	break;
		if(input!="___________")
		{
			for(int i=0;i<input.size();i++)
		{
			if(input[i]=='o')
			temp+='1';
			else if(input[i]==' ')
			temp+='0';
		}
		sso<<temp;
		sso>>var;
		ans=btod(var);
		sso.clear();
		temp="";
		printf("%c",ans);
		cnt=1;
		}
		
   }
   
	return 0;
}
