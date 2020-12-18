#include<bits/stdc++.h>
using namespace std;


int main()
{
	bool flag;
	int test,size,carry,remainder,t1,t2;
	string a,b,n1,n2,ans,sum;
	
	cin>>test;
	
	while(test--)
	{
		cin>>a>>b;
		flag=false;
		n1="";
		n2="";
		sum="";
		for(int i=a.size()-1;i>=0;i--)
		{
			
			if(flag==0 and a[i]=='0')
			{
				
			}
			else
			{
				n1+=a[i];
				flag=true;
			}
		}
		flag=false;
		for(int i=b.size()-1;i>=0;i--)
		{
			
			if(flag==0 and b[i]=='0')
			{
				
			}
			else
			{
				n2+=b[i];
				flag=true;
			}
		}
	
		carry=0;
		ans="";
		flag=false;
	    for(int i=n1.size()-1 ,j=n2.size()-1;i>=0 or j>=0 ;i--,j--)
		{
			    t1= i>=0 ? n1[i]-48 : 0;
			    t2= j>=0 ? n2[j]-48 : 0;
			    
		     int temp = t1 + t2;

			    temp+=carry;
			    if(temp>=10)
				carry=temp/10;
				else
				carry=0;
				
				remainder=temp%10;
				
					if(remainder==0 and flag==0)
					{
						
					}
					else
					{
					 ans+=(remainder+48);
					 flag=true;	
					}
	
		}
		if(carry>0)
        ans+=(carry+48);
    
        cout<<ans<<endl;
        
	}
	
	return 0;
}
