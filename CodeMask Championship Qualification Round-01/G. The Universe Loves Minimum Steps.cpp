#include <cstdio>

using namespace std;

int main()
{
    int T, N , max ,input;
    scanf("%d", &T);

    for(int i = 0 ; i < T ; i++)
    {

        scanf("%d", &N);
        max = 0;
        for(int j = 0 ; j < N ;j++)
        {
            scanf("%d", &input);
            if(input < 0) input=input*-1;
            if(input > max) max = input;
        }
        printf("Case %d: %d\n",i+1, max );
    }
    return 0;
}
