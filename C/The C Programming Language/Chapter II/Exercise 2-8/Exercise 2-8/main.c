//
//  main.c
//  Exercise 2-8
//
//  Created by Yilun Yang on 7/3/20.
//  Copyright © 2020 Yilun Yang. All rights reserved.
//

#include <stdio.h>

unsigned rightrot(unsigned x, int n);

int main(int argc, const char * argv[]) {
    int x, n;
        
    printf("Input a hexadecimal number:");
    scanf("%d", &x);
    printf("Input a number:");
    scanf("%d", &n);

    printf("%u\n", rightrot(x, n));
    
    return 0;
}

unsigned rightrot(unsigned x,int n)
{
    int i = 0;
    unsigned t = ~0;
    for (i = 0; (t = t >> 1) > 0; i++) {
        ;
    }
    unsigned r = x << (i - n);
    x = x >> n;
    x = x | r;
    return x;
}


