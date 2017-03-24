//
//  main.cpp
//  F. Painting Tiles
//
//  Created by Anirudha Paul on 2/18/16.
//  Copyright © 2016 Anirudha Paul. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    int test_case;
    unsigned long long input ;
    scanf("%d", &test_case);
    
    for(int i = 0 ; i < test_case ; i++ )
    {
        scanf("%llu", &input);
        
        if(input == 1 || (input==8)||((input%7)==0))
        {
            printf("Case %d: Oh no, my eggs! :(\n",i+1);
        }
        else
        {
            printf("Case %d: No eggs for you! :D\n",i+1);
        }
    }
    return 0;
}
