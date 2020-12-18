#include<stdio.h>
#include<iostream>
#include<algorithm>
#include<vector>
#include<math.h>
#define  sf scanf
#define  pf printf
using namespace std;
typedef vector<int> v;
typedef v::iterator it;

int main()
{

//std::ios_base::sync_with_stdio(false);
int n,k;
while(sf("%d",&n)==1)
{
	v array(n),dummy(n-1);

for(int i=0;i<n;i++)
sf("%d",&array[i]);
if(n==1)
pf("Jolly\n");
else if(n==2)
{
	if(abs(array[0]-array[1])==1)
	pf("Jolly\n");
	else
	pf("Not jolly\n");
}
else
{
	for(int i=0;i<n-1;i++)
dummy[i]=abs(array[i+1]-array[i]);


it p1=dummy.begin();
it p2=dummy.end();

sort(p1,p2);

for(k=0;k<n-2;k++)
if(abs(dummy[k]-dummy[k+1])!=1)
break;
if(k==n-2)
pf("Jolly\n");
else
pf("Not jolly\n");

	
}
}

	return 0;

}

