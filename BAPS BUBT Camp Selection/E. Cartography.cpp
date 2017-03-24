#include <bits/stdc++.h>

using namespace std;
long long power(long long x ,long long y , long long int mod)
{
    long long result = 1 ;

    for(long long  i = 0 ; i < y ; i++)
    {
        result= (result * x)%mod;
    }
    return result;
}
int main()
{
    int T;

    scanf("%d", &T);
    long long int M , K ;
    for(int i = 0 ; i < T ;i++)
    {
        scanf("%lld %lld", &M , &K);

        long long int answer = ((((K-1) * K)%1000000007) * power(K*K - 3*K + 3 , M-1 , 1000000007))%1000000007;

        printf("%lld\n" , answer);
    }

    return 0;
}

