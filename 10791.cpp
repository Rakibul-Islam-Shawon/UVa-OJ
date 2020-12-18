#include<bits/stdc++.h>
bool flag[200005];
int List[214748364]= {0},primes[100000];
int listSize,cnt;
using namespace std;


void sieve(int n)
{

    cnt=0;
    primes[cnt++] = 2;
    for(int i=3; i<=n; i+=2)
    {
        if(flag[i] == 0)
        {
            primes[cnt++] = i;
            if(i <= n/i)
            {
                for(int j=i*i; j<=n; j+=i*2)
                    flag[j] = 1;
            }
        }
    }

    return ;
}

int primeFactorize( int n)
{
    int count,last, b = sqrt(n);

    last=n;

    for(long int i = 0; i<cnt and primes[i]<=b; i++ )
    {
        if( n % primes[i] == 0 )
        {
            count=0;
            while( n % primes[i] == 0 )
            {

                n /= primes[i];
                count++;
            }

            List[primes[i]]=pow(primes[i],count);
            last=primes[i];
            b = sqrt(n);

        }
    }

    if( n > 1 )
    {
        if(n!=last)
            List[n]=n;
        last=n;
    }

    return last;
}
int main()
{
    sieve(56350);
    int n;
    int last;
    int ans,test=1;

    while(scanf("%d",&n)==1)
    {
        if(n==0)
            return 0;
        ans=0;
        last=primeFactorize(n);

        if(last==n)
        {
            printf("Case %d: %lld\n",test++,n+1LL);

        }

        else
        {
            for(int i=2; i<=last; i++)
            {
                if(List[i]!=0)
                {
                    ans+=List[i];
                   
                }

            }
            if(ans==n)
                ans+=1;
            printf("Case %d: %d\n",test++,ans);

            memset(List,0,sizeof(int)*(last+1));

        }


    }

    return 0;
}

