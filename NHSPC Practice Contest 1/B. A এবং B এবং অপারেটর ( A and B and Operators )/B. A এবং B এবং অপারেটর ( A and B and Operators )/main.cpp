//
//  main.cpp
//  B. A এবং B এবং অপারেটর ( A and B and Operators )
//
//  Created by Anirudha Paul on 4/18/15.
//  Copyright (c) 2015 Anirudha Paul. All rights reserved.
//

#include <iostream>
#include <cstdio>

using namespace std;

int main(int argc, const char * argv[])
{
    int case_numb , a = 0 , b = 0;
    char c = '+' ;
    
    scanf("%d", &case_numb);
    
    for (int i = 0 ; i < case_numb ; i++)
    {
        scanf("%d %d %c", &a , &b , &c);
    
    
    switch (c)
    {
        case '+':
            printf("Case %d: %d\n",i+1, a+b);
            break;
            
            case '-':
            printf("Case %d: %d\n", i +1, a-b);
            break;
            
            case '%':
            printf("Case %d: %d\n", i+1 , a%b);
            break;
            
            case '/':
            printf("Case %d: %d\n", i+1 , a/b);
            break;
            
            case '*':
            printf("Case %d: %d\n", i+1, a*b);
            break;
            
        default:
            break;
    }
    }
    return 0;
}
