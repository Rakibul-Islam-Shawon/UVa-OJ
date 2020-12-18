#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<iostream>
#include<string.h>
using namespace std;

int gcd(int a, int b)
{
int rem;
while(1)
{
rem = a % b;
if(rem == 0)
{
return b;
break;
}
a = b;
b = rem;

}
}

int main()
{
bool flag[1000009];
int n, check, count, save, m, a, b, c, k;
while(scanf("%d", &n) != EOF)
{
if(n <= 4)
printf("0 %d\n", n);
else
{
memset(flag, 0, n+1);
count = 0, save = 0;

m = sqrt(n);

for(int i = m+1; i >= 1; i--)
{
for(int j = 1; i > j; j++)
{
check = gcd(i, j);

if(check == 1)
{
if((i - j) % 2 != 0 && pow(i, 2) + pow(j, 2) <= n)
{
count++;

a = i*i - j*j;
b = 2 * i * j;
c = i*i + j*j;

k = 1;

while(c * k <= n)
{
flag[a * k] = 1;
flag[b * k] = 1;
flag[c * k] = 1;
k++;
}
}
else if(i*i + j*j > n)
break;
}

}

}

for(int i = 1; i <= n; i++)
{
if(flag[i] == 0)
save++;
}

printf("%d %d\n", count, save);

}


}


return 0;

}
