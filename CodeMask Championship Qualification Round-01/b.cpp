#include <map>
#include <cstdio>
#include <iostream>
#include <cmath>

using namespace std;


int main()
{
    int T ;
    long long int N ;
    bool found = false;
    long long ans ;
    scanf("%d", &T);

    for(int i = 0 ; i<T ;i++)
    {
        scanf("%lld", &N);

        if(N%2 != 0)
        {
            printf("Case %d: %lld\n",i+1,N);
        }
        else
        {
            while(N%2 == 0)
            {
                N= N/2;
            }
            printf("Case %d: %lld\n",i+1,N);
        }

    }
    return 0;
}
