//
//  main.cpp
//  H. Obligatory IDPC Problem
//
//  Created by Anirudha Paul on 2/18/16.
//  Copyright © 2016 Anirudha Paul. All rights reserved.
//

#include <iostream>
#include <cstdio>

using namespace std;

//int perm[11];

int main(int argc, const char * argv[])
{
    //int x = 1 ,
    int input;
    unsigned long long ans;
    //for(int i = 1 ; i < 11 ; i++)
   // {
     //   perm[i] = x*i;
       // x = perm[i];
    //}
    int test_case ;
    
    scanf("%d", &test_case);
    
    for(int i = 0 ; i < test_case ; i++)
    {
        scanf("%d", &input);
        ans = 1;
        int x = 1 ;
        int  y = 2;
        for (int j = 0 ; j < input ; j++)
        {
            ans *= (x*y/2);
            //cout << x <<"::" << y<<endl ;
            x+=2;
            y+=2;
        }
        printf("%llu\n",ans);
    }
    return 0;
}
