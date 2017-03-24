#include <cstdio>
#include <iostream>

using namespace std;

int main()
{
    long long int T ;
    long long int N ;
    scanf("%lld", &T);

    for(long long int i = 0 ; i < T ; i++)
    {
        scanf("%lld", &N);
        if(N==0)
        {
            printf("1\n");
        }
        else if (N==1)
        {
            printf("2\n");
        }
        else
        {
            int ans = 2 + (N-1) *5 + 2 *(N-1)*(N-2);
            printf("%lld\n",ans);
        }
    }
    return 0;

}
