//
//  main.c
//  Exercise 2-1
//
//  Created by Yilun Yang on 6/16/20.
//  Copyright © 2020 Yilun Yang. All rights reserved.
//

#include <stdio.h>
#include <limits.h>
#include <float.h>

int main(int argc, const char * argv[]) {
    printf("char: from %d to %d\n",CHAR_MIN, CHAR_MAX);
    printf("signed char: from %d to %d\n",SCHAR_MIN, SCHAR_MAX);
    printf("unsigned char: from 0 to %u\n",UCHAR_MAX);

    printf("short: from %d to %d\n",SHRT_MIN,SHRT_MAX);
    printf("signed short: from %d to %d\n",SHRT_MIN, SCHAR_MAX);
    printf("unsigned short: from 0 to %u\n",USHRT_MAX);

    printf("int: from %d to %d\n",INT_MIN,INT_MAX);
    printf("signed int: from %d to %d\n",INT_MIN, INT_MAX);
    printf("unsigned int: from 0 to %u\n", UINT_MAX);

    printf("long: from %ld to %ld\n",LONG_MIN,LONG_MAX);
    printf("signed long: from %ld to %ld\n",LONG_MIN, LONG_MAX);
    printf("unsigned long: from 0 to %lu\n",ULONG_MAX);
    
    return 0;
}
