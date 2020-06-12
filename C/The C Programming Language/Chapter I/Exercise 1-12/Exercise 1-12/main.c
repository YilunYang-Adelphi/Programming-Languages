//
//  main.c
//  Exercise 1-12
//
//  Created by Yilun Yang on 6/6/20.
//  Copyright © 2020 Yilun Yang. All rights reserved.
//

#include <stdio.h>

#define IN 1
#define OUT 0

int main(int argc, const char * argv[]) {
    
    int c, state;
    state = OUT;
    while ((c = getchar()) != EOF)
    {
        putchar(c);
        if (c == ' ' || c == '\n' || c == '\t')
        {
            state = OUT;
            putchar('\n');
        }
        else if (state == OUT)
        {
            state = IN;
        }
    }
    
    return 0;
}
