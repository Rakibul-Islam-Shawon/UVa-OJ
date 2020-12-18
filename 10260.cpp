#include<bits/stdc++.h>
using namespace std;
int main()
{
	bool flag;
	string str;
	char *check;
	int n,j,arra[100],pos;
	while(getline(cin,str))
	{
		n=str.size();
		pos=0;
		for(int i=0;i<n;)
		{
			j=i;
			while(str[i]==str[j] and j<n)
			{
				
				j++;
				
			}
			if(str[i]=='B'||str[i]=='F'||str[i]=='P'||str[i]=='V')
			{
				if(pos!=0 and arra[pos-1]==1 and flag!=true)
				arra[pos]=1;
				else
				{
				arra[pos]=1;
				pos++;	
				}
				flag=false;
			}
				
				else if(str[i]=='C'||str[i]=='G'||str[i]=='J'||str[i]=='K'||str[i]=='Q'||str[i]=='S'||str[i]=='X'||str[i]=='Z')
				{
				if(pos!=0 and arra[pos-1]==2 and flag!=true)
				arra[pos]=2;
				else
				{
				arra[pos]=2;
				pos++;	
				}
				flag=false;	
				}
				
				else if(str[i]=='D'||str[i]=='T')
				{
					if(pos!=0 and arra[pos-1]==3 and flag!=true)
				  arra[pos]=3;
				  else
				  {
				  arra[pos]=3;
				  pos++;	
				  }
				  flag=false;
			    }
				else if(str[i]=='L')
				{
				if(pos!=0 and arra[pos-1]==4 and flag!=true)
				arra[pos]=4;
				else
				{
				arra[pos]=4;
				pos++;	
				}
				flag=false;
			    }
				else if(str[i]=='M'||str[i]=='N')
				{
				if(pos!=0 and arra[pos-1]==5 and flag!=true)
				arra[pos]=5;	
				else
				{
				arra[pos]=5;
				pos++;	
				}
				flag=false;	
				}
				else if(str[i]=='R')
				{
					arra[pos]=6;
					pos++;
				}
				else
				flag=true;
			i=j;
			
		}
		
		for(int i=0;i<pos;i++)
		printf("%d",arra[i]);
		printf("\n");
	}
}
