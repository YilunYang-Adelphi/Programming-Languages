//
//  main.c
//  Exercise 3-4
//
//  Created by Yilun Yang on 7/12/20.
//  Copyright © 2020 Yilun Yang. All rights reserved.
//  ANSWER: Since the range of unsigned int is from -2147483648 to 2147483647. When n = -n be executed, there is no place for storing its sign.

#include <stdio.h>
#include <string.h>
#define abs(x) ((x)>0?(x):-(x))

void itoa(int n, char s[]);
void reverse(char s[]);

int main(int argc, const char * argv[]) {
    char s[100];
    unsigned int n = -2147483648;
    itoa(n, s);
    
    printf("\n%s\n", s);
    return 0;
}

void reverse(char s[])
{
    int c, i, j;
    for (i = 0, j = strlen(s)-1; i < j; i++, j--) {
        c = s[i];
        s[i] = s[j];
        s[j] = c;
    }
}

void itoa(int n, char s[])
{
    int i, sign;
    sign = n;
    i = 0;
    do {
        s[i++] = abs(n % 10) + '0';
    } while ((n /= 10) != 0);
    if (sign < 0) {
        s[i++] = '-';
    }
    s[i] = '\0';
    reverse(s);
}
