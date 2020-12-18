#include<bits/stdc++.h>
using namespace std;

int main()
{
	bool flag=false;
	string str[10],p,temp;
	int i=0,set=1,size;
	while(getline(cin,p))
	{
		
		if(p=="9")
		{
			
			sort(str,str+i);
			
			for(int j=0;j<i-1;j++)
			{
				size=str[j].size();
				temp=str[j+1].substr(0,size);
				
				if(temp==str[j])
				{
				  printf("Set %d is not immediately decodable\n",set++);
				  flag=true;
				  break;	
				}
				
				
			}
			
			if(flag==false)
			printf("Set %d is immediately decodable\n",set++);
			i=0;
			flag=false;
		}
		else
		{
			str[i++]=p;
		}
		
	}
	return 0;
}
