#include<bits/stdc++.h>

using namespace std;

string arra[5000+5];

string sum(string a,string b)
{

string ans="";

int k,r,len1=a.size(),len2=b.size(),remainder=0;
string str ;

len1=len1-1;
len2=len2-1;

while(len1>=0 and len2>=0)
{

k=(a[len1]-48)+(b[len2]-48);
k+=remainder;
remainder=0;

if(k>=10)
{

stringstream ss;
r=k%10;

ss << r;
str = ss.str();

 ans+=str;

remainder=k/10;


}
else
{

stringstream ss;
ss << k;
str = ss.str();
ans+=str;
ss.clear();
}

len1--;
len2--;


}

if(len1>=0)
{
while(len1>=0)
{

k=(a[len1]-48);

k+=remainder;

remainder=0;

if(k>=10)
{
stringstream ss;
r=k%10;

ss << r;
str = ss.str();

 ans+=str;

remainder=k/10;

}
else
{
stringstream ss;
ss << k;
str = ss.str();

ans+=str;

}
len1--;

}

}

if(remainder!=0)
{
stringstream ss;
ss << remainder;
str = ss.str();

ans+=str;

}

remainder=0;

reverse(ans.begin(),ans.end());

return ans;

}
int main()
{

string a,b;
int n;
arra[0]="0";
arra[1]="1";


for(int i=2;i<=5000;i++)
{

a=arra[i-1];
b=arra[i-2];

arra[i]=sum(a,b);

}

while(scanf("%d",&n)==1)
{

cout<<"The Fibonacci number for "<<n<<" is "<<arra[n]<<endl;
}

return 0;
}



