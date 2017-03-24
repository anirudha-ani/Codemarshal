#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long T , input;
    long long int ans1 , ans2 ;
    scanf("%lld", &T);

    for(int i = 0 ; i < T ; i++)
    {
        scanf("%lld", &input);
        ans1 = 3 * (input * input) - (3 * input) +1;
        ans2 = input * ( (input * input) -1) + input;

        printf("Case %d: %lld %lld\n", i+1 , ans1 , ans2);
    }
    return 0;
}
