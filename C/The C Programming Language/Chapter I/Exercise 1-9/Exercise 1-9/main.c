//
//  main.c
//  Exercise 1-9
//
//  Created by Yilun Yang on 6/6/20.
//  Copyright © 2020 Yilun Yang. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    int subC=0, preC=0;
    
    while ((subC = getchar()) != EOF)
    {
        if (subC != ' ' && preC != subC)
        {
            putchar(subC);
        }
        else if (subC == ' ' && preC != ' ')
        {
            putchar(' ');
        }
        preC = subC;
    }
    
    return 0;
}
