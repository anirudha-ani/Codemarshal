#include<bits/stdc++.h>
using namespace std;

long long MOD = 1000000007;
long long factorial[1000005];

long long mod(long long b,long long p)
{
    if(p==1)
        return b;
    if(p%2==1)
        return(mod(b,p-1)*b)%MOD;
    else
    {
        long long res=mod(b,p/2);
        return (res*res)%MOD;
    }
}
int main()
{
    long long test_case ,n,r,divisor,answer,x,y;

    scanf("%lld",&test_case);

    factorial[1]=1;

    for(long i=2;i<1000001;i++)
    {
        factorial[i]=(i * factorial[i-1]) % MOD;
    }

    for(int i = 0 ; i < test_case ; i++)
    {
        answer = 0 ;
        scanf("%lld %lld", &x ,&y);

        for(long long j = x ; j <= y ; j++)
        {
            n = j-1;
            r = 2;

            if(n<r)
            {
                 continue;
            }
            else if(n==r||r==0)
            {
                answer = (answer +1)%MOD;
                continue;
            }
        divisor =((factorial[n-r]%MOD)*(factorial[r]%MOD))%MOD;

        answer = (answer + ((factorial[n]*mod(divisor,MOD-2))%MOD))%MOD;
        }
        printf("%lld\n", answer);


    }
    return 0;
}
