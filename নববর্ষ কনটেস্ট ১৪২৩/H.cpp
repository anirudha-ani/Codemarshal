#include <bits/stdc++.h>

using namespace std;

int main()
{
    int T;
    long long int ans ,x;

    scanf("%d", &T);

    for(int i = 0 ; i < T ; i++)
    {
        scanf("%lld", &x);

        ans = x * (x-1) / 2;

        printf("%lld\n", ans);
    }
    return 0;
}
