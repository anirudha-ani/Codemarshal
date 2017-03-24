#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("out.txt", "w" , stdout);

    cout << "500" << endl;

    for(int i = 0 ; i < 500 ; i++)
    {
        int x = rand() % 1000000;
        int y = rand() % 1000000;

        if(x > y)
        {
            swap(x , y);
        }
        cout << x << " " << y << endl;
    }
}
