#include<bits/stdc++.h>
using namespace std;

int main()
{
	bool flag;
	int i,k,len;
	string input,temp,token;
	flag=false;
	while(getline(cin,input))
	{
		
		
		if(input=="#")
		break;
		if(flag==false)
		i=0;
		else
		{
			i=0;
			while(input[i]!=' ' and i<input.size())
			{
				if(!ispunct(input[i]) and !isdigit(input[i]))
				token+=input[i];
				i++;
			}
			cout<<token<<endl;
			
			token="";
			flag=false;
		}
		
		while(i<input.size())
		{
			if(i==input.size()-1 and input[input.size()-1]=='-')
			{
				k=i-1;
				flag=true;
				while(input[k]!=' ')
				{
					if(!ispunct(input[k]) and !isdigit(input[k]))
					token+=input[k];
					k--;
					if(k<0)
					break;
				}
				reverse(token.begin(),token.end());
			}
			else if(!ispunct(input[i]) and !isdigit(input[i]))
			{
				temp+=input[i];
			}
			i++;
		}
		if(flag==true)
		{
		   len=	temp.size()-token.size();
		   if(len==0)
		   cout<<endl;
		   else
		   cout<<temp.substr(0,len)<<endl;
		}
		else
		cout<<temp<<endl;
		
		
		temp="";
		
	}
	
	return 0;
}
