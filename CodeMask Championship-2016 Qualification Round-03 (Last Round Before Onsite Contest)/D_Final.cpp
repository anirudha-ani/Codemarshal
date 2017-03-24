#include <cstdio>
#include <iostream>

using namespace std;
long long MOD = 1000000007;


long long findans(long long x)
{
    long long rest , ans ;
    if(x%3  == 0)
    {
        rest = x / 3;
        ans = ((((x+1) * (x+2))%MOD)*rest) %MOD;
    }
    else if((x+1)%3  == 0)
    {
        rest = (x+1) / 3;
        ans = ((((x) * (x+2))%MOD)*rest) %MOD;
    }
    else if((x+2)%3  == 0)
    {
        rest = (x+2) / 3;
        ans = ((((x+1) * (x))%MOD)*rest) %MOD;
    }
    return ans;
}
int main()
{
//    freopen("out.txt" , "r" , stdin);
//    freopen("anirudha_ans.txt" , "w" , stdout);
    long long int N, x,y , answer;

    scanf("%lld", &N);

    for(int i = 0 ; i < N ; i++)
    {
        scanf("%lld %lld", &x , &y);

        answer = (findans(y-2)/2 - findans(x-3)/2 + MOD)%MOD;


        printf("%lld\n", answer);
    }


}
