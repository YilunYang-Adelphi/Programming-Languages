//
//  main.c
//  Exercise 2-6
//
//  Created by Yilun Yang on 6/30/20.
//  Copyright © 2020 Yilun Yang. All rights reserved.
//

#include <stdio.h>

unsigned setbits(unsigned x, int p, int n, unsigned y);

int main(int argc, const char * argv[]) {
    unsigned Xhex, Yhex;
    int position, number;

    printf("Input a hexadecimal number here:\n");
    scanf("%x\n", &Xhex);
    printf("Input the position.\n");
    scanf("%d\n", &position);
    printf("Input the number of bits.\n");
    scanf("%d\n", &number);
    printf("Input another hexadecimal number here:\n");
    scanf("%x\n", &Yhex);

    printf("%x", setbits(Xhex, position, number, Yhex));
    return 0;
}

unsigned setbits(unsigned x, int p, int n, unsigned y)
{
    return ((x >> (p + 1 - n)) & ~(~0 << n)) + (y & (~0 << n));
}
