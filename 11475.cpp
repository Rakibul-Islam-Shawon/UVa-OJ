#include<bits/stdc++.h>

using namespace std;
int pos[1000000];
const int MAX = 1000000+5;
int f[MAX];
int kmp(string str,string pat)
{
    str = pat + "#" + str;
    int pt = 0, ret = 0;
    f[0] = 0;
    for(int i=1; i<str.size()-1; )
	{
        if(str[i] == str[pt])
		{
            f[i++] = ++pt;
        }
        else if(pt > 0)
		{
            pt = f[pt - 1];
        }
        else
		{
            f[i++] = 0;
        }
    }
    for(int i=0; i<str.size(); i++)
	          if(f[i]==pat.size())
			  pos[ret++]=i-pat.size()-1;         
	 
	
    return ret;
}


int main()
{
	pos[0]=-1;
	
     int ret,key;
	string input,temp,main;
	bool flag;
	while(getline(cin,input))
	{
		flag=false;
		main=input;
		
		reverse(input.begin(),input.end());
		
		if(main==input)
		cout<<input<<endl;
		else
		{
			temp=main[main.size()-1];
	      
	      ret=kmp(main,temp);
	      
	      if(ret==0)
	      {
	      	temp=main.substr(0,main.size()-1);
	      	reverse(temp.begin(),temp.end());
	      			input=main+temp;
	      			
	      			cout<<input<<endl;

	      }
	      else
	      {
	      	while(1)
	      {
	      	for(int i=0;i<ret;i++)
	      	{
	      		key=pos[i];
	      			input=main.substr(0,key);
	      		
	      		reverse(input.begin(),input.end());
	      		     temp=main+input;
	      		    
	      		     input=temp;
	      		     reverse(temp.begin(),temp.end());
	      		     if(temp==input)
	      		     {
	      		     	cout<<input<<endl;
	      		     	flag=true;
	      		     	
	      		     }
	      		
	      		if(flag==true)
	      		break;
	      		
	      	}
	      	
	      	if(flag==true)
	      		break;
	      }
	      
	      }
	      
	      
		}
		
    }
		
	return 0;
	
}
