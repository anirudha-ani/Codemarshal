#include <cstdio>
using namespace std;

int main()
{
    int T,input;
    scanf("%d", &T);
    long long int ans;
    for(int i = 0 ; i < T ; i++)
    {
        scanf("%d", &input);

        ans = (input-1)*2;
        printf("Case %d: %lld\n", i+1 ,ans);


    }
    return 0;
}
