#include <bits/stdc++.h>

using namespace std;

int main()
{
    int Te, P , E , T ;

    scanf("%d", &Te);

    for(int i = 0 ; i < Te ; i++)
    {
        scanf("%d %d %d", &P , &E , &T);

        if(P>0)
        {
            if(E>0)
            {
                 printf("%d Seconds\n", T);
            }
            else
            {
                printf("0 Seconds\n");
            }
        }
        else
        {
            printf("Impossible\n");
        }

    }
    return 0;
}
