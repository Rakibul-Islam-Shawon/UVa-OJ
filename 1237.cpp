
#include<bits/stdc++.h>

using namespace std;

map<string,pair<int,int> > input;
map<int,string>maker;

int main()
{

int p,q,test,dbsize,low,high;
bool flag=false;
string name,ans;
scanf("%d",&test);


while(test--)
{

if(flag==true)
printf("\n");
cin>>dbsize;

int pos=0;

while(dbsize--)
{

cin>>name;
maker[pos++]=name;

scanf("%d %d",&low,&high);

input[name].first=low;
input[name].second=high;

}

cin>>q;

while(q--)
{

scanf("%d",&p);

int count=0;

for(int i=0;i<input.size();i++)
{

if(p>=input[maker[i]].first and p<=input[maker[i]].second)
{

ans=maker[i];
count++;
if(count>1)
break;
}

}

if(count==1)
{

cout<<ans<<endl;
}
else
cout<<"UNDETERMINED"<<endl;

}
flag=true;

input.clear();
ans.clear();
}

return 0;
}


