#include<bits/stdc++.h>

int main()
{
	char str[1001];
	int len,temp,even,odd,diff;
	
	while(1)
	{
		odd=0;even=0;
		gets(str);	
		if(strcmp(str,"0")==0)
		return 0;
		len=strlen(str);
		for(int i=0;i<len;i+=2)
		{
			temp=(int)str[i]-48;
			odd+=temp;	
		}
		for(int i=1;i<len;i+=2)
		{
			temp=(int)str[i]-48;
			even+=temp;	
		}
		
		diff=abs(even-odd);
		if(diff%11==0 || diff==0)
		printf("%s is a multiple of 11.\n",str);
		else
		printf("%s is not a multiple of 11.\n",str);
	}
}
