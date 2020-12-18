#include<bits/stdc++.h>

int main()
{
	 int arra[201][201];
       int n,count,kount,i,j,k,cnt,a,b,flag,knt,mark;
       
       while(scanf("%d",&n)==1)
       {
       	cnt=0,flag=0,mark=0,knt=0;
          if(n==0)
          return 0;
          
          for(i=0;i<n;i++)
          {
             count=0;
             for(j=0;j<n;j++)
             {
                scanf("%d",&arra[i][j]);
                if(arra[i][j]==1)
                {
                	count++;
                	
                }
                
             }
                if(count%2!=0)
             {
                cnt++;
                if(cnt>1)
                {
                   flag=1;
                }
                else
                {
                   
                   a=i+1;
                }
                
                
             }
             
          }
          
          if(flag==1)
          printf("Corrupt\n");
          else
          {
          	for(j=0;j<n;j++)
             {
                kount=0;
             for(i=0;i<n;i++)
             {
                if(arra[i][j]==1)
                kount++;
             }
             if(kount%2!=0)
             {
                knt++;
                if(knt>1)
                {
                   mark=1;
                   break;
                }
                else
                {
                	b=j+1;
                }
            }
          }
          if(mark==1)
          printf("Corrupt\n");
          else if(knt==0 and cnt==0)
          printf("OK\n");
          else if(knt ==1 and cnt ==1)
          printf("Change bit (%d,%d)\n",a,b);
          }
     }
}
