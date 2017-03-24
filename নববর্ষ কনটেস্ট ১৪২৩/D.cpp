#include <bits/stdc++.h>

using namespace std;

int main()
{

    string x;
    int case_no = 1;
    while(cin >> x)
    {
        bool mark[4];

        for(int i = 0 ; i < 4 ; i++)
        {
            mark[i] = false;
        }
        bool doshomik = false;
        int length = x.length();

        for(int i = 0 ; i < length ; i++)
        {
            if((x[i]>='a' && x[i] <='f') || (x[i]>='A' && x[i] <='F'))
            {
                mark[3] = true;
            }
            else if((x[i]>='8' && x[i] <='9'))
            {
                mark[2] = true;
            }
            else if((x[i]>='2' && x[i] <='7'))
            {
                mark[1] = true;
            }
            else if(x[i]=='.' )
            {
                if( doshomik != true)
                {
                    doshomik = true;
                }
                else mark[0] = true;

            }
            else if(x[i] != '0' && x[i] != '1' )
            {
                mark[0] = true;
            }
        }
        if(mark[0] == true)
        {
            printf("Case %d: habijabi number\n", case_no);
            case_no++;
        }
        else if(mark[3] == true)
        {
            printf("Case %d: hexadecimal\n", case_no);
            case_no++;
        }
        else if(mark[2] == true)
        {
            printf("Case %d: decimal & hexadecimal\n", case_no);
            case_no++;
        }
        else if(mark[1] == true)
        {
            printf("Case %d: octal, decimal & hexadecimal\n", case_no);
            case_no++;
        }
        else
        {
            printf("Case %d: binary, octal, decimal & hexadecimal\n", case_no);
            case_no++;
        }
    }
    return 0;
}
