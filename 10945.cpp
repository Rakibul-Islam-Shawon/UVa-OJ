#include<stdio.h>
#include<string.h>
#include<iostream>
#include<string.h>
using namespace std;

int main()
{
	char str[500],rev[500],main[500];
  int i,j;
  
  while(1)
  {
  	j=0;
  	gets(str);
 if(strcmp(str,"DONE")==0)
 return 0;
  for(i=0;i<=strlen(str);i++)
  {
  	
        if(str[i]>=65&&str[i]<=90)
      {
      	 str[i]=str[i]+32;
      	 
      }
      
  }
  
  for(i=0;i<=strlen(str);i++)
  {
  	if(str[i]==' '||str[i]==','||str[i]=='.'||str[i]=='?'||str[i]=='!')
	{
	}
	else
	{
		main[j]=str[i];
		j++;
	}
     
  }
   main[j]='\0';
  	for(i=strlen(main)-1,j=0;i>=0;i--,j++)
	{
	
		rev[j]=main[i];
	
	}
		
	
	rev[j]='\0';
	
	if(strcmp(main,rev))
	printf("Uh oh..\n");
	else
	printf("You won't be eaten!\n");
  }
  
 
  return 0;
}
