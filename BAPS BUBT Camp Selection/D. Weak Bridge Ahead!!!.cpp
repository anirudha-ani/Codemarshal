#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    long long int T  , k ,n , m , r ,l, Tor , Tol , x ;
    cin >> T;
    string in ;
    for(int i = 0 ; i  < T ; i++)
    {
       cin >> n >> m ;
       Tor = 0;
       Tol = 0 ;
       for(int j = 0 ; j < n ; j++)
       {
           cin >> x;

           Tor += x  ;
           if(j==n-1)
           {
               r = x;
           }
       }
       for(int j = 0 ; j < m ; j++)
       {
           cin >> x;

           Tol += x  ;
           if(j==m-1)
           {
               l = x;
           }
       }

       long long int ans = min (Tor+Tol - r , Tor + Tol - l);
       cout << "Case " << i+1 << ": " << ans << endl;
    }

    return 0;
}

