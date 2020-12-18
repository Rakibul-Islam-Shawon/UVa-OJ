#include<bits/stdc++.h>

using namespace std;

unsigned long long arra[20000000];
int fibo(void)
{
	arra[0]=1;
	arra[1]=2;
	int i=2;
	arra[i]=arra[0]+arra[1];
	while(i<=110)
	{
		i++;
		arra[i]=arra[i-1]+arra[i-2];
		
	}
	return i;
}
int find(int n,int key)
{
	int first=0,last=n-1,pos,mid;
    while( first<=last)
	{
    	
         mid=(first+last)/2;
         
       if(key==arra[mid])
	     {
             pos=mid+1;
             break;
         }
         else if(key<arra[mid])
		 {
             last=mid-1;
			 
         }
         else
         
            first=mid+1; 
    }
    
 return pos;
}
int main()
{
	int len,key,pos,cnt,max,max_pos,p;
	len=fibo();
	
	char input[200],output[200];
	
	int value[200];
	int test,n;
	cin>>test;
	
	while(test--)
	{
		cnt=0;
		cin>>n;
		for(int i=0;i<n;i++)
		{
			scanf("%d",&value[i]);
		}
		
	    max=*max_element(value,value+n);
		
		max_pos=find(110,max);
		for(p=0;p<max_pos;p++)
		{
			output[p]=' ';
		}
		output[p]='\0';
		
		getchar();
		
		gets(input);
		
		for(int i=0;i<n;i++)
		{
			key=value[i];
			pos=find(110,key);
			
			if(isalpha(input[cnt]))
			{
				if(isupper(input[cnt]))
				{

					output[pos-1]=input[cnt];
					cnt++;
					
				}
				else
				{
					while(!isupper(input[cnt]))
					{
						cnt++;
					}
					output[pos-1]=input[cnt];
					cnt++;
				}
			}
			else
			{
				while(!isalpha(input[cnt]))
					{
						cnt++;
					}
					output[pos-1]=input[cnt];
					cnt++;
			}
		}
		puts(output);
	
	}
	
	return 0;
}
