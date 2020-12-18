#include<bits/stdc++.h>
int save[1000];
bool List[10000]={false};
int pos;
int main()
{
	int m,n,length,len,exp,divide,main,key;
	while(scanf("%d %d",&n,&m)!=EOF)
	{
	main=n;
		pos=0,length=0;
	if(n>=m && n%m==0)
	{
	save[length++]=0;
	pos++;
	}
	else
	{
	
	 if(n>m)
	n=n%m;
    if(n<m)
	n*=10;
	while(n<m)
	{
	
		n*=10;
		save[length++]=0;
		pos++;
	}
	if(n>m&&n%m==0)
		{
			save[length++]=n/m;
			pos++;
		    save[length++]=0;
		    n=n%m;
		    List[n]=true;
		    pos++;
		}
	for(int i=1; ;i++)
	{	
        
		 if(n<m and n*10<m)	
		 {
		 	key=n;
		 	break;
		 }	
		else if(n<m)
		   n*=10;
		if(List[n]==true)
		{
			key=n;
			break;
		}
		
		List[n]=true;
		save[length++]=n/m;
		n=n%m;
		
		pos++;
	}	
	} 
	//for(int i=0;i<pos;i++)
	//printf("%d",save[i]);
	printf("%d\n",key);
//	printf("\n");
	memset(List,0,(10000));
	
	}
	
	
	return 0;
}
