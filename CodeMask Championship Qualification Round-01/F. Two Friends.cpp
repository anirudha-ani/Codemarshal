#include <cstdio>

using namespace std;

int main()
{
    int T , input;
    scanf("%d", &T);

    for(int i = 0 ; i < T ; i++)
    {
        scanf("%d", &input);

        if(input < 3)
        {
            printf("Case %d: Tie\n", i+1);
        }
        else if( input %2 == 0)
        {
            printf("Case %d: CodeMask\n", i+1);
        }
        else
        {
            printf("Case %d: CodeForces\n", i+1);
        }
    }
    return 0;
}
