#include<bits/stdc++.h>

using namespace std;


int main()
{

int n,temp;
vector<int> input;

while(scanf("%d",&n)==1)
{

if(n==0) return 0;

for(int i=0;i<n;i++) {

scanf("%d",&temp);
input.push_back(temp);

}

sort(input.begin(),(input.begin()+input.size()));
printf("%d",input[0]);
for(int i=1;i<n;i++)
printf(" %d",input[i]);
printf("\n");

input.clear();
}

return 0;
}
