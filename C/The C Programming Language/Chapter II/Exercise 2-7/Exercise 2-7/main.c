//
//  main.c
//  Exercise 2-7
//
//  Created by Yilun Yang on 7/2/20.
//  Copyright © 2020 Yilun Yang. All rights reserved.
//

#include <stdio.h>

unsigned invert(unsigned set, int position, int number);

int main(int argc, const char * argv[]) {
    unsigned hex;
    int p, n;
    
    printf("Input a hexadecimal number:");
    scanf("%x", &hex);
    printf("Input the position:");
    scanf("%d", &p);
    printf("Input the number:");
    scanf("%d", &n);
    
    printf("%x\n", invert(hex, p, n));
    
    return 0;
}

unsigned invert(unsigned x, int p, int n)
{
    return x ^ ~(~0U << n) << (p + 1 - n);
}
