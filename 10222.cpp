#include<bits/stdc++.h>
using namespace std;

int main()
{
	
	string input,ans;
	
	int len;
	getline(cin,input);
	len=input.size();
	
	
	for(int i=0;i<len;i++)
	{
		if(input[i]=='a' or input[i]=='A')
		{
			ans+='[';
		}
		else if(input[i]=='b' or input[i]=='B')
		{
			ans+='c';
		}
		else if(input[i]=='c' or input[i]=='C')
		{
			ans+='z';
		}
		else if(input[i]=='d' or input[i]=='D')
		{
			ans+='a';
		}
		else if(input[i]=='e' or input[i]=='E')
		{
			ans+='q';
		}
		else if(input[i]=='f' or input[i]=='F')
		{
			ans+='s';
		}
		else if(input[i]=='g' or input[i]=='G')
		{
			ans+='d';
		}
		else if(input[i]=='h' or input[i]=='H')
		{
			ans+='f';
		}
		else if(input[i]=='i' or input[i]=='I')
		{
			ans+='y';
		}
		else if(input[i]=='j' or input[i]=='J')
		{
			ans+='g';
		}
		else if(input[i]=='k' or input[i]=='K')
		{
			ans+='h';
		}
		else if(input[i]=='l' or input[i]=='L')
		{
			ans+='j';
		}
		else if(input[i]=='m' or input[i]=='M')
		{
			ans+='b';
		}
		else if(input[i]=='n' or input[i]=='N')
		{
			ans+='v';
		}
		else if(input[i]=='o' or input[i]=='O')
		{
			ans+='u';
		}
		else if(input[i]=='p' or input[i]=='P')
		{
			ans+='i';
		}
		else if(input[i]=='q' or input[i]=='Q')
		{
			ans+="";
		}
		else if(input[i]=='r' or input[i]=='R')
		{
			ans+='w';
		}
		else if(input[i]=='s' or input[i]=='S')
		{
			ans+=']';
		}
		else if(input[i]=='t' or input[i]=='T')
		{
			ans+='e';
		}
		else if(input[i]=='u' or input[i]=='U')
		{
			ans+='t';
		}
		else if(input[i]=='v' or input[i]=='V')
		{
			ans+='x';
		}
		else if(input[i]=='w' or input[i]=='W')
		{
			ans+="";
		}
		else if(input[i]=='x' or input[i]=='X')
		{
			ans+=92;
		}
		else if(input[i]=='y' or input[i]=='Y')
		{
			ans+='r';
		}
		else if(input[i]=='z' or input[i]=='Z')
		{
			ans+=39;
		}
		else if(input[i]=='!')
		{
			ans+="";
		}
		else if(input[i]=='[')
		{
			ans+='o';
		}
		else if(input[i]==']')
		{
			ans+='p';
		}
		else if(input[i]==',')
		{
			ans+='n';
		}
		else if(input[i]=='.')
		{
			ans+='m';
		}
		else if(input[i]==';')
		{
			ans+='k';
		}
		else if(input[i]==39)
		{
			ans+='l';
		}
		else if(input[i]=='/')
		{
			ans+=',';
		}
		else if(input[i]==32)
		{
			ans+=" ";
		}
	}
	cout<<ans<<endl;
	
	
	return 0;
	
}
