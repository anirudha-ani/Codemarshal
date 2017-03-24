#include <cstdio>
#include <iostream>

using namespace std;

int main()

{
    int T ,A , M;

    scanf("%d", &T);

    for(int i = 0 ; i < T ;i++)
    {
        scanf("%d %d", &A , &M);

        if(M==1)
        {
            printf("No\n");
        }
        else
        {
            printf("Yes\n");
        }
    }
    return 0;
}
