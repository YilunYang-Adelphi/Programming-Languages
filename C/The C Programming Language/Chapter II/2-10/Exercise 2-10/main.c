//
//  main.c
//  2-10
//
//  Created by Yilun Yang on 7/7/20.
//  Copyright © 2020 Yilun Yang. All rights reserved.
//

#include <stdio.h>

int lower(int c);

int main(int argc, const char * argv[]) {
    char c[] = " THIS is A char set FOR the demostration.";
    printf("Char set:%s\n", c);
    printf("lowered: ");
    for (int i = 0; c[i] > 0; i++) {
        printf("%c", lower(c[i]));
    }
    printf("\n");
    return 0;
}

int lower(int c)
{
    return c >='A' && c <= 'Z' ? c + 'a' - 'A' : c;
}
