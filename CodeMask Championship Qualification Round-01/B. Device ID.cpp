#include <cstdio>
#include <map>
#include <set>
#include <iostream>

using namespace std;

int main()
{
    int T , N , x , command;
    scanf("%d", &T);

    for(int i = 0 ; i < T ; i++)
    {
        scanf("%d", &N);
        //int mark[100005] = {0};
        set <int> index_empty;
        for(int i = 1 ; i < 100005 ;i++ )
        {
            index_empty.insert(i);
        }
        int value = 1;
        printf("Case %d:\n", i+1);
        for(int j = 0 ; j < N ; j++)
        {
            scanf("%d", &command);

            if(command == 1)
            {
                scanf("%d", &x);
                if(x < 100005)
                {
//                    mark[x] = 1;
//                    while(mark[value] == 1)
//                    {
//                        value++;
//                    }
                     index_empty.erase(x);
                }

            }
            else if(command == 2)
            {
                scanf("%d", &x);
                if(x < 100005)
                {
//                    mark[x] = 0;
//                    if(value > x)
//                    {
//                        value = x;
//                    }
                       index_empty.insert(x);
                }

            }
            else if(command == 3)
            {
                set<int>::iterator it=index_empty.begin();
                std::cout << *it <<endl;

            }
        }
    }
    return 0;
}
