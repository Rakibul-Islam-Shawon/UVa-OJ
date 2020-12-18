#include<stdio.h>
#include<iostream>
#include<algorithm>
#include<malloc.h>
#include<string.h>
using namespace std;
int mirrors(char x[]);
int palindrome(char x[]);
int mirpalin(char line[]);
int mirpalin(char line[])
{
int k=0,len,i;
len=strlen(line);  
for(i=0;i<len;i++)
  {
  if(line[i]=='A'||line[i]=='H'||line[i]=='I'||line[i]=='L'||
  line[i]=='M'||line[i]=='O'||line[i]=='T'||line[i]=='U'||
  line[i]=='V'||line[i]=='W'||line[i]=='X'||
  line[i]=='Y'|| 
  line[i]=='1'||line[i]=='8'||line[i]=='0')
  k++;
  }  
 if(k==len)
 return 1;
 else
 return 0;      
}
int mirrors(char test[])
{
	char mirror[30],rev[30];
	int i,j;
	for( i=0;i<strlen(test);i++)
	{
		if(test[i]=='A')
		mirror[i]='A';
		else if(test[i]=='E')
		mirror[i]='3';
			else if(test[i]=='H')
		mirror[i]='H';
			else if(test[i]=='I')
		mirror[i]='I';
			else if(test[i]=='J')
		mirror[i]='L';
			else if(test[i]=='L')
		mirror[i]='J';
			else if(test[i]=='M')
		mirror[i]='M';
			else if(test[i]=='O')
		mirror[i]='O';
			else if(test[i]=='S')
		mirror[i]='2';
			else if(test[i]=='T')
		mirror[i]='T';
			else if(test[i]=='U')
		mirror[i]='U';
			else if(test[i]=='V')
		mirror[i]='V';
			else if(test[i]=='W')
		mirror[i]='W';
			else if(test[i]=='X')
		mirror[i]='X';
			else if(test[i]=='Y')
		mirror[i]='Y';
			else if(test[i]=='Z')
		mirror[i]='5';
			else if(test[i]=='1')
		mirror[i]='1';
			else if(test[i]=='2')
		mirror[i]='S';
			else if(test[i]=='3')
		mirror[i]='E';
			else if(test[i]=='5')
		mirror[i]='Z';
			else if(test[i]=='8')
		mirror[i]='8';
		else
		break;
		
	}
	

		for(i=strlen(mirror)-1,j=0;i>=0;i--,j++)
	{
	
		rev[j]=mirror[i];
	}
	
	rev[j]='\0';
	
	if(strcmp(rev,test))
	return 0;
	else
	
	return 10;
}
int palindrome(char test[])
{
	char rev[30];
	int i,j;
	
	for(i=strlen(test)-1,j=0;i>=0;i--,j++)
	{
	
		rev[j]=test[i];
	}
	
		rev[j]='\0';
	
	if(strcmp(test,rev))
	return 0;
	else
   return 20;
	
}
int main()
{
		char test[30];
	int i,j,ans1,ans2,mp;
	while(gets(test))
	{
		
	ans2=palindrome(test);
     
if(ans2==20)
{
	mp=mirpalin(test);
	if(mp==1)
             printf("%s -- is a mirrored palindrome.\n\n",test);
             else
             printf("%s -- is a regular palindrome.\n\n",test);
}
	
     else 
	 {
	 ans1=mirrors(test);
      if(ans1==10)
      printf("%s -- is a mirrored string.\n\n",test);
      else
      printf("%s -- is not a palindrome.\n\n",test);
      }	
		
	}
	
	return 0;
}
