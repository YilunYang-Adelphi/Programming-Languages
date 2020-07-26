//
//  main.c
//  Exercise 4-2
//
//  Created by Yilun Yang on 7/26/20.
//  Copyright © 2020 Yilun Yang. All rights reserved.
//

#include <stdio.h>
#include <ctype.h>

#define MAX 1000

double exatof(char s[]);

int main(int argc, const char * argv[]) {
    // insert code here...
    printf("Convert 123.45e-6 (scientific notaion format) to its floating-point format.\n");
    printf("%g\n", exatof("123.45e-6"));
    return 0;
}

double exatof(char s[])
{
    double val, power, expo = 1.0;
    int i, sign, exsign, e;
    for (i = 0; isspace(s[i]); i++) {
        ;
    }
    sign = (s[i] == '-') ? -1 : 1;
    if (s[i] == '+' || s[i] == '-') {
        i++;
    }
    for (val = 0.0; isdigit(s[i]); i++) {
        val = 10.0 * val + (s[i] - '0');
    }
    if (s[i] == '.') {
        i++;
    }
    for (power = 1.0; isdigit(s[i]); i++) {
        val = 10.0 * val + (s[i] - '0');
        power *= 10.0;
    }
    if (s[i] == 'e' || s[i] == 'E') {
        i++;
    }
    exsign = (s[i] =='-') ? -1 : 1;
    if (s[i] == '+' || s[i] == '-') {
        i++;
    }
    for (e = 0; isdigit(s[i]); i++) {
        e = 10 * e + (s[i] - '0');
    }
    if (exsign == 1) {
        for (int j = 0; j < e; j++) {
            expo *= 10.0;
        }
    }
    else if (exsign == -1)
    {
        for (int j = 0; j < e; j++) {
            expo /=10.0;
        }
    }
    
    return (sign * val / power) * expo;
}
