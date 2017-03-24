#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    int T  , k ,maxi;
    cin >> T;
    string in ;
    for(int i = 0 ; i  < T ; i++)
    {
        cin >> k ;
        string ans ;
        maxi = 0 ;
        map<string , int > counter;
        for(int j = 0 ; j < k ; j++)
        {
            cin >> in ;
            counter[in] = counter[in] + 1;

            if(counter[in] > maxi)
            {
                maxi = counter[in];
                ans = in;
            }

        }
        cout << "Case " << i+1 << ": " << ans << endl;
    }

    return 0;
}
