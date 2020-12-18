    #include<bits/stdc++.h>
    using namespace std;
     
    int main()
    {
    	stringstream sso;
    	int test,i,len,cnt,knt=1;
    	string ff;
    	string input[105],ans,temp;
    	bool flag=false;
    	scanf("%d",&test);
     
    	getline(cin,ff);
    	getline(cin,ff);
     
    	while(test--)
    	{
    		for( i=0; ;i++)
    		{
    			getline(cin,input[i]);
     
    			if(input[i]=="")
    			break;
    		}
    		if(flag!=false)
    		printf("\n");
    		printf("Case #%d:\n",knt++);
    		for(int j=0;j<i;j++)
    		{
     
    			cnt=1;
    			sso<<input[j];
    			while(sso>>temp)
    			{
    				len=temp.size();
    				if(len>=cnt)
    				{
    					ans+=temp[cnt-1];
    					cnt++;
    				}
     
    			}
    			cout<<ans<<endl;
    			ans="";
    			flag=true;
     
    			sso.clear();
    		}
     
    	}
     
    	return 0;
    }
