#include <cstdio>

using namespace std;

int main()
{
    int N;
    int X;

    scanf("%d", &N);

    for(int i = 0 ; i < N ; i++)
    {
        scanf("%d", &X);
        if(X==0)
            printf("1\n");
        else
        printf("0\n");
    }
    return 0;
}
