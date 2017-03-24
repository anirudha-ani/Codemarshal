#include <bits/stdc++.h>

using namespace std;

long long int calculate_sum(long long int x)
{
    x++;

    long long int first = x/4;
    long long int second = x/4;
    long long int third = x/4;

    long long int remaining = x%4;

    if(remaining == 3)
    {
        first++;
        second++;
        third++;
    }
    else if(remaining == 2)
    {
        first++;
        second++;

    }
    else if(remaining == 1)
    {
        first++;

    }

    long long int sum = (((first-1) * 2) * first) + ((3 + (third-1) * 2) * third) + second;
    return sum;
}
int main()
{
    int test;

    scanf("%d", &test);

    long long int L , R;

    for(int i = 0 ; i < test ; i++)
    {
        scanf("%lld %lld", &L , &R);
        long long temp ;
        if(L>R)
        {
            temp = L;
            L=R;
            R=temp;
        }
        if(L>0)
        {
            L--;
        }
        long long int ans = calculate_sum(R) - calculate_sum(L);
        printf("%lld\n", ans);
    }
    return 0;
}
