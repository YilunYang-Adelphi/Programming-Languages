//
//  main.c
//  Exercise 2-9
//
//  Created by Yilun Yang on 7/5/20.
//  Copyright © 2020 Yilun Yang. All rights reserved.
//

#include <stdio.h>

int bitcount(unsigned x);

int main(int argc, const char * argv[]) {
    printf("bitcount:%d", bitcount((unsigned)0x75d));
    return 0;
}

int bitcount(unsigned x)
{
    int b;

    for(b=0; x!=0; x &= x-1)
        ++b;

    return b;
}
