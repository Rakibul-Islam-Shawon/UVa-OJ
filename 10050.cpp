    #include<bits/stdc++.h>
     
    int main()
    {
    int test,day,party,count,k;
    int arra[109];
    bool flag[3656];
    memset(flag,0,sizeof(bool)*3656);
    scanf("%d",&test);
     
    while(test--)
    {
    count=0;
    scanf("%d",&day);
    scanf("%d",&party);
     
    for(int i=0;i<party;i++)
    scanf("%d",&arra[i]);
     
    for(int i=0;i<party;i++)
    {
     
    for(int j=arra[i];j<=day;j+=arra[i])
    {
     
    if(j%7!=0 and j%7!=6)
    flag[j]=true;
    }
    }
     
    for(int i=1;i<=day;i++)
    if(flag[i]!=0)
    count++;
    printf("%d\n",count);
     
     
    memset(flag,0,sizeof(bool)*(day+1));
     
    }
     
     
    return 0;
     
    }
