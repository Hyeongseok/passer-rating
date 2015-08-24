//
//  main.c
//  passer-rating
//
//  Created by Hyeongseok Kang on 8/24/15.
//  Copyright (c) 2015 Hyeongseok Kang. All rights reserved.
//

#include <stdio.h>
#include "rating.h"

int main(int argc, const char * argv[])
{
    int nArgs;
    do {
        int comps, atts, yards, TDs, INTs;
        
        printf("comps, atts, yards, TDs, INTs: ");
        nArgs = scanf("%d %d %d %d %d", &comps, &atts, &yards, &TDs, &INTs);
        
        if (nArgs == 5) {
            float rating = passer_rating(comps, atts, yards, TDs, INTs);
            printf("Rating = %.1f\n", rating);
        }
    } while (nArgs == 5);
    
    return 0;
}
