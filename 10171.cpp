#include<bits/stdc++.h>

using namespace std;

struct var{
	
	int first;
	char second;
	
};
int main()
{
	struct var ans[1000];
    int matrix1[91][91],matrix2[91][91];
	int n,cost;
	char access,direction,x,y,src1,src2;
	
	while(1)
	{
		int sum=10000,temp;
		
	for(int i=65;i<=90;i++)
	for(int j=65;j<=90;j++)
	{
		if(i==j)
		matrix1[i][j]=0;
		else
		matrix1[i][j]=500;
	}
	for(int i=65;i<=90;i++)
	for(int j=65;j<=90;j++)
	{
		if(i==j)
		matrix2[i][j]=0;
		else
		matrix2[i][j]=500;
	}
	cin>>n;
	getchar();
	if(n==0)
	return 0;
	
	for(int i=0;i<n;i++)
	{
		scanf("%c %c %c %c %d",&access,&direction,&x,&y,&cost);
		getchar();

		if(access=='Y')
		{
			if(direction=='U')
			matrix1[x][y]=cost;
			else
			{
				matrix1[x][y]=cost;
				matrix1[y][x]=cost;
			}
		}
		else
		{
		if(direction=='U')
			matrix2[x][y]=cost;
			else
			{
				matrix2[x][y]=cost;
				matrix2[y][x]=cost;
			}	
		}
	}
	
	    for (int k=65;k<=90;k++)
        for (int i=65;i<=90;i++)
	    for (int j=65;j<=90;j++)
      {
      	   if (matrix1[i][j] > matrix1[i][k] + matrix1[k][j])
      	   
      	   	matrix1[i][j] = matrix1[i][k] + matrix1[k][j];     
      }
      
        for (int k=65;k<=90;k++)
        for (int i=65;i<=90;i++)
	    for (int j=65;j<=90;j++)
      {
      	   if (matrix2[i][j] > matrix2[i][k] + matrix2[k][j])
      	   
      	   	matrix2[i][j] = matrix2[i][k] + matrix2[k][j];     
      }
      
      cin>>src1>>src2;
      
      int pos=0;
      for(int k=65;k<=90;k++)
      {
      	   temp=matrix1[src1][k]+matrix2[src2][k];
			 if(temp<=sum)
			 {
			 	if(temp<sum)
			 	{
			 		pos=0;
			 		ans[pos].first=temp;
			 	    ans[pos].second=k;
			 	    pos++;
			 	    sum=temp;
			 	}
			 	else
			 	{
			 	    ans[pos].first=temp;
			 	    ans[pos].second=k;
			 	    pos++;
			 	    sum=temp;	
			 		
			 	}
			 	
			 }	 	
      	
     }
     if(src1==src2)
     {
     	printf("0");
     	for(int i=0;i<pos;i++)
     		cout<<" "<<ans[i].second;
     		cout<<endl;
     	
     }
     else if(ans[pos-1].first>=500)
     printf("You will never meet.\n");
     else
     {
     	
     	
     		cout<<ans[0].first;
     		for(int i=0;i<pos;i++)
     		cout<<" "<<ans[i].second;
     		cout<<endl;
     	
     	
     }
     	
	}
	

}
