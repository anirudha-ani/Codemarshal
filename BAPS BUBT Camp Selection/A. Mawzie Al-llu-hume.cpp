#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    int T  , k ,n , p , r , To , x ;
    cin >> T;
    string in ;
    for(int i = 0 ; i  < T ; i++)
    {
        cin >> k >> n;

        if(k==0)
        {
            p = n / 3 ;

            r = ((2* n / 3)/3) * 2 ;
            x =  (2* n / 3)/3 ;
            cout << "Case " << i+1 << ":" << endl;
            cout << p << endl;
            cout << r << endl;
            cout << x << endl;
        }
        else
        {
            p = (2*n + n)/ 2;
            r = 2 * n ;
            To = n + p + r;
            cout << "Case " << i+1 << ":" << endl;
            cout << p << endl;
            cout << r << endl;
            cout << To << endl;
        }
    }

    return 0;
}
