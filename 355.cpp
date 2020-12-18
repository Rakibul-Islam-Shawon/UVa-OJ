#include<bits/stdc++.h>
using namespace std;

long long to_decimal(string s,int base)
{
    int cnt=0;
    long long res=0;
    for(int i=s.length()-1;i>=0;i--)
    {
        if ( s[i] > 47 && s[i] < 58 )
        res+= (pow(base,cnt)*(s[i]-'0'));
        else
        res+= (pow(base,cnt)*(s[i]-55));
        cnt++;
    }
    return res;
}

string dec_to(long long num, int base)
{
    string s="";
    while(num)
    {
        int tmp=num%base;
        if(tmp<10)
            s+=tmp+'0';
        else
            s+= char (tmp+55);
        num/=base;
    }
    if(s=="")
    return "0";
    return s;
}

int main()
{
   string num,sr,res;
   int from, to;
   while(cin>>from>>to>>num)
   {
   	bool flag=false;
   	  for(int i=0;i<num.size();i++)
   	  {
   	  	  if ( num[i] > 47 && num[i] < 58 )
           {
           	if((num[i]-48)>=from)
           	{
           	  printf("%s is an illegal base %d number\n",num.c_str(),from);
				 flag=true;	
				 break;
           	}
           	
           }
        else
        {
        	if((num[i]-55)>=from)
        	{
           	  printf("%s is an illegal base %d number\n",num.c_str(),from);
				 flag=true;	
				 break;
           	}
        }
   	  	
   	  }
   	  if(flag!=true)
   	  {
   	  	long long buf;
       buf=to_decimal(num,from);
       sr=dec_to(buf,to);
       reverse(sr.begin(),sr.end());
       printf("%s base %d = %s base %d\n",num.c_str(),from,sr.c_str(),to);
      
   	  }
       
   }
return 0;
}
