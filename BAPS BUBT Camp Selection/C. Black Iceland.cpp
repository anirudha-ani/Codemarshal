#include <bits/stdc++.h>

using namespace std;
int visited[10005];
vector <int> adjList[10005];

int BFS(int index)
{
    visited[index] = 1;

    queue<int> line_queue;
    queue<int>visited_queue;

    line_queue.push(index);
    visited_queue.push(1);

    while(line_queue.empty()!= true)
    {
        int current_index = line_queue.front();
        line_queue.pop();

        int visited_status = visited_queue.front();
        visited_queue.pop();

        int length = adjList[current_index].size();

        for(int i = 0 ; i < length ; i++)
        {

            if(visited_status == 3)
            {
                if(visited[adjList[current_index][i]] == 3)
                {

                }
                else
                {
                    visited[adjList[current_index][i]] = 3;
                    line_queue.push(adjList[current_index][i]);
                    visited_queue.push(3);
                }
            }
            else if(visited_status == 1)
            {
                if(visited[adjList[current_index][i]] == 0)
                {
                    visited[adjList[current_index][i]] = 2;
                    line_queue.push(adjList[current_index][i]);
                    visited_queue.push(2);
                }
                else if(visited[adjList[current_index][i]] == 1)
                {
                    visited[adjList[current_index][i]] = 3;
                    line_queue.push(adjList[current_index][i]);
                    visited_queue.push(3);
                }
            }
             else if(visited_status == 2)
            {
                if(visited[adjList[current_index][i]] == 0)
                {
                    visited[adjList[current_index][i]] = 1;
                    line_queue.push(adjList[current_index][i]);
                    visited_queue.push(1);
                }
                else if(visited[adjList[current_index][i]] == 2)
                {
                    visited[adjList[current_index][i]] = 3;
                    line_queue.push(adjList[current_index][i]);
                    visited_queue.push(3);
                }
            }
        }
    }

}
int main()
{
    int T ;

    scanf("%d", &T);

    for(int j = 0 ; j < T ; j++)
    {
        int N , M , Q ;

        scanf("%d %d %d", &N , &M , &Q);
        for(int i = 0 ; i <= N ; i++)
        {
            adjList[i].clear();
        }
        for(int i = 0 ; i < M ; i++)
        {
            int X , Y ;

            scanf("%d %d", &X, &Y);
            adjList[X].push_back(Y);
            adjList[Y].push_back(X);


        }
        memset(visited , 0 , sizeof(visited));
        for(int i = 1 ; i <= N ; i++)
        {
            if(visited[i] == 0)
            {
                BFS(i);
            }
        }
        printf("Case %d:\n", j+1);
        for(int  i = 0 ; i < Q ; i++)
        {
            int U , V ;
            scanf("%d %d", &U, &V);
            if(visited[U] == 3 || visited[V] == 3)
            {
                printf("Yes\n");
            }
            else if(visited[U] == 2 && visited[V] == 2)
            {
                printf("Yes\n");
            }
             else if(visited[U] == 1 && visited[V] == 1)
            {
                printf("Yes\n");
            }
            else
            {
                printf("No\n");
            }
        }
    }
    return 0 ;
}
