#include<bits/stdc++.h>
using namespace std;

bool isvowel(char ch)
{
	if (ch == 'a' || ch == 'A' || ch == 'e' || ch == 'E' || ch == 'i' || ch == 'I' || ch =='o' || ch=='O' || ch == 'u' || ch == 'U')
    return true;
  else
    return false;
}
int main()
{
	
	char ch,token;
	
	while(ch=getchar())
	{
		if(ch==EOF)
		return 0;
		
		if(isalpha(ch))
		{
			if(isvowel(ch))
			{
				while(isalpha(ch))
				{
					printf("%c",ch);
					ch=getchar();
				}
				printf("ay");
			}
			else
			{
				token=ch;
				ch=getchar();
				while(isalpha(ch))
				{
					printf("%c",ch);
				    ch=getchar();	
				}
				printf("%cay",token);
				
			}
		}
		printf("%c",ch);
	
	}
	
}

