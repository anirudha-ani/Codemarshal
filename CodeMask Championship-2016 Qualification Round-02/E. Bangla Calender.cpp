#include <cstdio>
#include <iostream>
#include <cstring>
#include <string>
#include <bits/stdc++.h>

using namespace std;
string Month[12] = {"Baishakh", "Jaishtha", "Ashar", "Sraban", "Bhadra", "Ashwin", "Kartik" ,"Agrahayan", "Poush", "Magh", "Falgun", "Chaitra"};
int main()
{
    int T ,dd,mm,yy , bdd, bmm , byy;

    scanf("%d", &T);

    for(int i = 0 ; i < T ; i++)
    {
        scanf("%d %d %d",&dd , &mm , &yy);

        bool isLeapyear = false;
        if ((yy % 4 == 0) && (!(yy % 100 == 0)|| (yy % 400 == 0)))
        {
            isLeapyear = true;
        }
        int days = dd;
        for(int i = 1 ; i < mm ; i++)
        {
            if(i==4 || i==6  || i== 9 || i == 11) days +=30;
            else if(i==2 && isLeapyear) days += 29;
            else if (i==2 && !isLeapyear) days += 28;
            else days += 31;
        }

        if(days <= 13)
        {
            bdd = 17 + days ;
            byy = yy-(2016 - 1422);
            printf("Case %d: %d, Poush, %d\n", i+1 , bdd ,byy);
            continue;

        }
        else
        {
            bdd = 0;
            days -= 13;
            bmm = 10;
            byy = yy-(2016 - 1422);
            //cout << days << endl;
            while(days)
            {
                bdd ++;
                days--;
                if(bdd == 32)
                {
                    bdd=1;
                    bmm++;

                    if(bmm == 13) bmm = 1;
                    if(bmm == 1) byy++;
                }
                else if(bdd == 31 && bmm > 5)
                {
                    if(bmm == 11 && isLeapyear)
                    {
                        continue;
                    }
                    else
                    {
                        bdd=1;
                        bmm++;

                        if(bmm == 13) bmm = 1;
                        if(bmm == 1) byy++;
                    }


                }

            }
            printf("Case %d: %d, %s, %d\n", i+1 , bdd ,Month[bmm-1].c_str(),byy);
        }
    }
    return 0;
}


