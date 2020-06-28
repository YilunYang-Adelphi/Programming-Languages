//
//  main.c
//  Exercise 2-2
//
//  Created by Yilun Yang on 6/17/20.
//  Copyright © 2020 Yilun Yang. All rights reserved.
//

#include <stdio.h>

int forloop(int v);

int whileloop(int v);

int main(int argc, const char * argv[]) {
    printf("forloop result: %d\n", forloop(0));
    printf("whileloop result: %d\n", whileloop(0));
    return 0;
}

int forloop(int v)
{
    for(int i = 0; i < 10; i++)
    {
        v++;
    }
    return v;
}

int whileloop(int v)
{
    int i = 0;
    while (i < 10) {
        i++;
        v++;
    }
    return v;
}
